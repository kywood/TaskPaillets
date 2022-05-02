#pragma once
#include "stdafx.h"
#include <functional>

#define MAKE_THREAD(className ,process) (new Thread(new thread_t(&className##::##process,this),L#className))
#define GET_CURRENT_THREAD_ID	std::this_thread::get_id().hash

class Lock;
typedef std::function<void(void*)> ThreadFunction;

class Thread
{
	size_t			id_;
	wstr_t			name_;
	thread_t* thread_;
	Lock* lock_;

public:

	Thread(thread_t* thread, wstr_t name);
	~Thread();

	size_t id();
	wstr_t &name();

	void setLock(Lock* lock);
	Lock* lock();
};

class ThreadManager : public Singleton< ThreadManager >
{
public:
	ThreadManager();
	~ThreadManager();

private:

};

ThreadManager : publi::ThreadManager : publi()
{
}

ThreadManager : publi::~ThreadManager : publi()
{
}




