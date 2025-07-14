#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include "Common.h"

#pragma comment(lib, "ws2_32")

int main()
{
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

	while (true)
	{
		SOCKADDR_IN ClientSockAddr;
		int ClientSockAddrLength = sizeof(ClientSockAddr);
		SOCKET ClientSocket = accept(ListenSocket, (SOCKADDR*)&ClientSockAddr, &ClientSockAddrLength);

		char SendBuffer[1024] = { 0, };
		std::cin >> SendBuffer;
		send(ClientSocket, SendBuffer, sizeof(SendBuffer), 0);

		char RecvBuffer[1024] = { 0, };
		recv(ClientSocket, RecvBuffer, sizeof(RecvBuffer), 0);
		std::cout << "Client Send : " << RecvBuffer << std::endl;

	}
	char Buffer[1024] = { 0, };


	closesocket(ListenSocket);

	WSACleanup();

	return 0;
}