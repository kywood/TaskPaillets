#pragma once
#include "stdafx.h"

#define TICK_INFINITY


class Work;
class TaskNode
{

	Work*	workObject_;
	int		freqSec_;
	int		durationSec_;

	tick_t  nextTick_;



public:
	TaskNode( Work *workObject , int fredSec , int durationSec );
	~TaskNode();

	void nextTick();
	bool expired();

	void tick();

};

class Task
{
	std::initializer_list<TaskNode*> taskList_;
	Thread* thread_;
	int		id_;

public:
	Task();
	~Task();

private:

};

Task::Task()
{
}

Task::~Task()
{
}
