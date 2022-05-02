#pragma once

//#include "stdafx.h"
#include <atomic>
#include <thread>
#include <mutex>

typedef unsigned long long UINT64;

typedef UINT64					object_t;
typedef UINT64					oid_t;
typedef int32_t					packet_size_t;

typedef std::time_t				tick_t;
typedef std::thread				thread_t;
typedef std::thread::id			threadId_t;
typedef std::recursive_mutex	lock_t;

typedef std::string				str_t;
typedef std::wstring			wstr_t;

