#pragma once

#define NOMINMAX

#include <Windows.h>
#include "flatbuffers/flatbuffers.h"
#include "UserEvents_generated.h"

int RecvPacket(SOCKET socket, flatbuffers::FlatBufferBuilder& Builder);
int SendPacket(SOCKET socket, flatbuffers::FlatBufferBuilder& Builder);
