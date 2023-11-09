#pragma once

#include "My_3DStruct.h"
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>

#ifndef _DEBUG
#define __ASSERT(expr, expMessage) void(0)
#else
#define __ASSERT(expr, expMessage) \
if(!(expr)) \
{ \
	_CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, "N3 Custom Assert Functon", expMessage); \
	char __szErr[512]; \
	sprintf(__szErr, "  ---- N3 Assert Warning (File:%s, Line:%d) ---- \n", __FILE__, __LINE__); \
	OutputDebugString(__szErr); \
	sprintf(__szErr, "    : %s\n", expMessage); \
	OutputDebugString(__szErr); \
	_CrtDbgBreak(); \
}
#endif

#if _DEBUG && !defined TRACE
#define TRACE printf
#else
#define TRACE  1 ? (void)0 : printf
#endif

