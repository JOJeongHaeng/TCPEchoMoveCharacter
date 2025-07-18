#define NOMINMAX
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include "Common.h"
#include "UserEvents_generated.h"

#pragma comment(lib, "ws2_32")

int main()
{
	srand((unsigned int)time(nullptr));
	
	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = AF_INET;
	ListenSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	ListenSockAddr.sin_port = htons(30300);

	bind(ListenSocket, (SOCKADDR*)&ListenSockAddr, sizeof(ListenSockAddr));

	listen(ListenSocket, 5);

	TIMEVAL Timeout = TIMEVAL{ 0, 100 };
	fd_set ReadSockets;
	fd_set ReadSocketCopy;
	FD_ZERO(&ReadSockets);
	FD_SET(ListenSocket, &ReadSockets);

	while (true)
	{
		ReadSocketCopy = ReadSockets;

		int ChangeSocketCount = select(0, &ReadSocketCopy, 0, 0, &Timeout);
		if (ChangeSocketCount > 0)
		{
			for (int i = 0; i < (int)ReadSockets.fd_count; ++i)
			{
				if (FD_ISSET(ReadSockets.fd_array[i], &ReadSocketCopy))
				{
					if (ReadSockets.fd_array[i] == ListenSocket)
					{
						SOCKADDR_IN ClientSockAddr;
						int ClientSockAddrLength = sizeof(ClientSockAddr);
						SOCKET ClientSocket = accept(ListenSocket, (SOCKADDR*)&ClientSockAddr, &ClientSockAddrLength);
						FD_SET(ClientSocket, &ReadSockets);
						std::cout << "Connected Client." << std::endl;
					}
					else
					{
						char RecvBuffer[4096] = { 0, };
						int RecvByte = RecvPacket(ReadSockets.fd_array[i], RecvBuffer);
						if (RecvByte <= 0)
						{
							SOCKET DeleteSocket = ReadSockets.fd_array[i];
							closesocket(ReadSockets.fd_array[i]);
							FD_CLR(ReadSockets.fd_array[i], &ReadSockets);
							SessionList.erase(DeleteSocket);

							flatbuffers::FlatBufferBuilder SendBuilder;
							auto DestroyPlayer = UserEvents::CreateS2C_DestroyPlayer(SendBuilder, DeleteSocket);
							auto EventData = UserEvents::CreateEventData(SendBuilder, GetTimeStamp(), UserEvents::EventType_S2C_DestroyPlayer, DestroyPlayer.Union());
							SendBuilder.Finish(EventData);

							for (const auto& Receiver : SessionList)
							{
								SendPacket(Receiver.second.PlayerSocket, SendBuilder);
							}
						}
						else
						{
							ProcessPacket(ReadSockets.fd_array[i], RecvBuffer);
						}
					}
				}
			}
		}
	}
	closesocket(ListenSocket);

	WSACleanup();

	return 0;
}

int ProcessPacket(SOCKET ClientSocket, const char* RecvBuffer)
{
	auto RecvEventData = UserEvents::GetEventData(RecvBuffer);

	flatbuffers::FlatBufferBuilder SendBuilder;

	switch (RecvEventData->data_type())
	{
	case UserEvents::EventType_C2S_Login:
	{
		auto LoginData = RecvEventData->data_as_C2S_Login();
		if (LoginData->userid() && LoginData->password())
		{
			UserEvents::Color Color(rand() % 255, rand() % 255, rand() % 255);
			int X = rand() % 80;
			int Y = rand() % 25;

			SessionList[ClientSocket] = Session(ClientSocket, X, Y,LoginData->userid()->c_str(), Color);
			std::cout << "Login Request success: " << LoginData->userid()->c_str() << ", " << LoginData->password()->c_str() << std::endl;
			auto LoginEvent = UserEvents::CreateS2C_Login(SendBuilder, (uint32_t)ClientSocket, true, SendBuilder.CreateString("Login Success"), X, Y, &Color);
			auto EventData = UserEvents::CreateEventData(SendBuilder, GetTimeStamp(), UserEvents::EventType_C2S_Login, LoginEvent.Union());
			SendBuilder.Finish(EventData);
			SendPacket(ClientSocket, SendBuilder);

			for (const auto& SellectSession : SessionList)
			{

			}
		}
	}

	return 0;
}