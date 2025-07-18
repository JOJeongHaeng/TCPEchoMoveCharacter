#pragma once

#define NOMINMAX

#include <Windows.h>
#include "flatbuffers/flatbuffers.h"
#include "UserEvents_generated.h"

#include <map>
#include <string>

class Session
{
public:
	Session() {};
	Session(SOCKET InPlayerSocket, int InX, int InY, std::string InUserId, UserEvents::Color InColor)
	{
		PlayerSocket = InPlayerSocket;
		X = InX;
		Y = InY;
		UserId = InUserId;
		Color = InColor;
	}
	SOCKET PlayerSocket;
	int X;
	int Y;
	std::string UserId;
	UserEvents::Color Color;
};

std::map<SOCKET, Session> SessionList;

uint64_t GetTimeStamp()
{
	return (uint64_t)GetTickCount64();
}


int SendPacket(SOCKET socket, flatbuffers::FlatBufferBuilder& Builder);
int RecvPacket(SOCKET socket, char* Buffer);


int SendPacket(SOCKET socket, flatbuffers::FlatBufferBuilder& Builder)
{
	int PacketSize = (int)Builder.GetSize();
	PacketSize = htonl(PacketSize);

	int SentByte = send(socket, (char*)&PacketSize, sizeof(PacketSize), 0);
	SentByte = send(socket, (char*)Builder.GetBufferPointer(), Builder.GetSize(), 0);
	if (SentByte <= 0)
	{
		std::cout << "Send Failed : " << WSAGetLastError() << std::endl;
	}
	return SentByte;
}

int RecvPacket(SOCKET socket, char* Buffer)
{
	int PacketSize = 0;
	int RecvByte = recv(socket, (char*)&PacketSize, sizeof(PacketSize), MSG_WAITALL);
	if (RecvByte <= 0)
	{
		std::cout << "Header Recv Failed : " << WSAGetLastError() << std::endl;
		goto End;
	}
	
	PacketSize = ntohl(PacketSize);
	RecvByte = recv(socket, Buffer, PacketSize, MSG_WAITALL);
	if (RecvByte <= 0)
	{
		std::cout << "Body Recv Failed : " << WSAGetLastError() << std::endl;
		goto End;
	}
End:
	return RecvByte;
}

void GotoXY(int x, int y)
{
	COORD pos = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}