// CodeTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
#include "../CrashDump/CrashDump.h"

#ifdef _DEBUG
	#pragma comment(lib, "../debug/CrashDump.lib")
#else
	#pragma comment(lib, "../release/CrashDump.lib")
#endif


int _tmain(int argc, _TCHAR* argv[])
{
	SetGlobalCrashDump();
	int *p = NULL;
	*p = 1;
	
	system("pause");
	return 0;
}

