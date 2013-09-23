/*
    update.cpp
    Check for program updates.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.

    wyUpdate Copyright (C) 2013 wyDay
*/

#include "sbluh.h"
#include <iostream>
#include "Shlwapi.h"


void update()
{
    STARTUPINFO si = {0}; si.cb = sizeof(si);
    PROCESS_INFORMATION pi = {0};
    CreateProcess(NULL,(char *)"wyUpdate.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
}

bool UpdateAvailable()
{
    STARTUPINFO si = {0}; si.cb = sizeof(si);
    PROCESS_INFORMATION pi = {0};

    // start wyUpdate
    if (!CreateProcess(NULL,(char *)"wyUpdate.exe\" /quickcheck /justcheck", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
    {
        return false;
    }

    // Wait until child process exits.
    WaitForSingleObject(pi.hProcess, INFINITE);

    // Get the exit code
    DWORD exitcode = 0;
    GetExitCodeProcess(pi.hProcess, &exitcode);

    // Close process and thread handles.
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    // exitcode of 2 means update available
    return exitcode == 2;
}
