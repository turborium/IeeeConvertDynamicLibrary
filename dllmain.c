#include "dll.h"
#include <windows.h>

#define IEEE_8087
#include "dtoa.c"
#include "g_fmt.c"

DLLIMPORT char *IeeeDoubleToChars(char *buf32, double value)
{
	return g_fmt(buf32, value);
}

DLLIMPORT double IeeeCharsToDouble(const char *str, char **ptr_end)
{
	return strtod(str, ptr_end);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	return TRUE;
}
