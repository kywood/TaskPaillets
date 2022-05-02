#pragma once

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Winmm.lib")

#include <windows.h>
#include <iostream>
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>


#include <assert.h> 
#include <fcntl.h>
#include <algorithm>  
#include <functional>

#include <list>

#include <thread>
#include <mutex>
#include <memory>

#include <string>
#include <tchar.h>

#include <ctime>
#include <random>
#include <typeinfo>    //typeinfo

#include "Type.h"

#include "Util.h"

#include "GameObject.h"
#include "Singleton.h"

#include "Logger.h"
#include "Thread.h"
#include "Lock.h"

#include "Clock.h"

#include "Shutdown.h"

