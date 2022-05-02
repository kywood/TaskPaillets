#pragma once
#include "stdafx.h"
#include <fstream>
#include "Singleton.h"
#include "Type.h"
#include <Windows.h>

#define SLog(arg, ...)				SystemLog::getInstance().log(arg, __VA_ARGS__);
#define SErrLog(arg, ...)			SystemLog::getInstance().log(arg, __VA_ARGS__); ::ExitProcess(0);

//-----------------------------------------------------------------//
class LogBase
{
public:
    LogBase(){}
    virtual ~LogBase(){}
    virtual void initialize() {}
    virtual void unInitialize() {}
    virtual void log(WCHAR *logStr) = 0;
};

//-----------------------------------------------------------------//
class LogPrintf : public LogBase
{
public:
    LogPrintf();
    void log(WCHAR *logStr);
};

//-----------------------------------------------------------------//
class LogFile : public LogBase
{
    std::wfstream   fs_;
    wstr_t			fileName_;
public:
    LogFile(WCHAR *config);
    virtual ~LogFile();

    void initialize(){}
    void initialize(WCHAR *logFileName);
    void log(WCHAR *logStr);
};
//-----------------------------------------------------------------//
// �α� ���� ��ü
//-----------------------------------------------------------------//
class LogWriter
{
private:
    LogBase			*base_;
    wstr_t			prefix_;
public:
    LogWriter();
    virtual ~LogWriter();

    void setLogger(LogBase *base, const WCHAR *logPrefix);
    LogBase *logger();

    void log(WCHAR *fmt, ...);
	void log(WCHAR *fmt, va_list args);
};
typedef LogWriter* LogWriterPtr;

//-----------------------------------------------------------------//
// ���� �ý��� �α�
//-----------------------------------------------------------------//
class SystemLog : public Singleton<SystemLog>
{
private:
    LogWriter   logWrite_;
public:
	SystemLog();
    virtual ~SystemLog();
	
	void initialize(WCHAR *config);
	void log(WCHAR *fmt, ...);
};