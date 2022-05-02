
#include "stdafx.h"
#include "Task.h"

class SystemReport : public Work
{
	void tick()
	{
		Monitoring& moniter = Monitoring::getInstance();
		//SLog((WCHAR*)L"### cpu usage : %2.2f%%, memory usage : %uByte", moniter.processCpuUsage(), moniter.processMemUsage());
		SLog((WCHAR*)L"### cpu usage : %2.2f%%, memory usage : %uByte", moniter.processCpuUsage(), moniter.processMemUsage());

		cout << "### cpu usage : " << moniter.processCpuUsage() << " memory usage : " << moniter.processMemUsage() << endl;

	}
};

class SystemReport2 : public Work
{
	void tick()
	{
		Monitoring& moniter = Monitoring::getInstance();
		//SLog((WCHAR*)L"### cpu usage : %2.2f%%, memory usage : %uByte", moniter.processCpuUsage(), moniter.processMemUsage());
		SLog((WCHAR*)L"### cpu usage : %2.2f%%, memory usage : %uByte", moniter.processCpuUsage(), moniter.processMemUsage());

		cout << "### 22 cpu usage : " << moniter.processCpuUsage() << " memory usage : " << moniter.processMemUsage() << endl;

	}
};



//
//void serverProcess()
//{
//	shared_ptr<Server> server(new IOCPServer(new ChattingProcess()));
//	SystemReport systemReport;
//	const int MONITOR_REPORTING_SEC = 1;
//	TaskManager::getInstance().add(&systemReport, MONITOR_REPORTING_SEC, TICK_INFINTY);
//	if (!server->run()) {
//		SLog(L"! error: server start fail");
//		return;
//	}
//}

//void _tmain(int argc, _TCHAR* argv[])
void _tmain()
{
	SystemReport systemReport;
	SystemReport2 systemReport2;
	const int MONITOR_REPORTING_SEC = 1;
	TaskManager::getInstance().add(&systemReport, MONITOR_REPORTING_SEC, TICK_INFINTY);
	TaskManager::getInstance().add(&systemReport2, 3, TICK_INFINTY);

	while (true)
	{
		int a = 100;
		a = 10;
		// cout << "A" << endl;
	}
}
