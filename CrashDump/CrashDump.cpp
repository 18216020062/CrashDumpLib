// CrashDump.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "MiniDumper.h"
#include "CrashDump.h"

CMiniDumper* g_miniDumperObject = NULL;

void SetGlobalCrashDump()
{
	if (g_miniDumperObject == NULL)
	{
		g_miniDumperObject = new CMiniDumper(true);
	}
}