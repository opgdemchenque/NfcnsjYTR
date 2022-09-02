
#pragma once

#ifdef _WIN32

#define NOWINRES
#define NOSERVICE
#define NOMCX
#define NOIME
#define NOCRYPT
#define NOMETAFILE
#define MMNOSOUND

#include <windows.h>

#undef PostMessage
#undef CreateEvent
#undef PlaySound
#undef SetCursor
#undef ProgressBox
#undef AddJob
#undef GetJob
#undef Yield
#undef SetPort
#undef CreateFont
#undef ShellExecute
#undef ShellExecuteEx
#undef GetCurrentTime
#undef GetTickCount
#undef GetCurrentDirectory
#undef GetObject
#undef LoadCursorFromFile
#undef GetCharABCWidths

#endif
