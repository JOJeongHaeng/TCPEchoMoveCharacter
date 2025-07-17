#define NOMINMAX
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include "Common.h"

#pragma comment(lib, "ws2_32")

int main()
{
	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN ServerSockAddr;
	memset(&ServerSockAddr, 0, sizeof(ServerSockAddr));
	ServerSockAddr.sin_family = AF_INET;
	ServerSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	ServerSockAddr.sin_port = htons(30300);

	connect(ServerSocket, (SOCKADDR*) &ServerSockAddr, sizeof(ServerSockAddr));
	while (true)
	{
		char RecvBuffer[1024] = { 0, };
		recv(ServerSocket, RecvBuffer, sizeof(RecvBuffer), 0);
		std::cout << "Server Send : " << RecvBuffer << std::endl;

		char SendBuffer[1024] = { 0, };
		std::cin >> SendBuffer;
		send(ServerSocket, SendBuffer, sizeof(SendBuffer), 0);
	}
	closesocket(ServerSocket);

	WSACleanup();

	return 0;
}