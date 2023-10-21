#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT char *IeeeDoubleToChars(char *buf32, double value);
DLLIMPORT double IeeeCharsToDouble(const char *str, char **ptr_end);

#endif
