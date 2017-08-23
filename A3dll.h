#pragma once
#include <Windows.h>
#include "WinResrc.h"
#define IDC_STATIC -1

#ifdef A3DLL_EXPORTS
#define EXPORT extern "C" __declspec (dllexport)
#else
#define EXPORT extern "C" __declspec (dllexport)
#endif

EXPORT HWND CALLBACK ShowRecordBox();
EXPORT PBYTE* CALLBACK ExportSound();
EXPORT DWORD* CALLBACK ExportLength();
EXPORT void CALLBACK ReverseMemory(BYTE * pBuffer, int iLength);
EXPORT BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

//{{NO_DEPENDENCIES}}
// Microsoft Developer Studio generated include file.
// Used by Record.rc
//
#define IDC_RECORD_BEG                  1000
#define IDC_RECORD_END                  1001
#define IDC_PLAY_BEG                    1002
#define IDC_PLAY_PAUSE                  1003
#define IDC_PLAY_END                    1004
#define IDC_PLAY_REV                    1005
#define IDC_PLAY_REP                    1006
#define IDC_PLAY_SPEED                  1007

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        102
#define _APS_NEXT_COMMAND_VALUE         40001
#define _APS_NEXT_CONTROL_VALUE         1008
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif