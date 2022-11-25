// Not code, just first try

// BOOL CreateProcessWithLogonW(
//  [in]                LPCWSTR               lpUsername,
//  [in, optional]      LPCWSTR               lpDomain,
//  [in]                LPCWSTR               lpPassword,
//  [in]                DWORD                 dwLogonFlags,
//  [in, optional]      LPCWSTR               lpApplicationName,
//  [in, out, optional] LPWSTR                lpCommandLine,
//  [in]                DWORD                 dwCreationFlags,
//  [in, optional]      LPVOID                lpEnvironment,
//  [in, optional]      LPCWSTR               lpCurrentDirectory,
//  [in]                LPSTARTUPINFOW        lpStartupInfo,
//  [out]               LPPROCESS_INFORMATION lpProcessInformation
//);

#include <iostream>
#include <windows.h>
#include <processthreadsapi.h>

using namespace std;

int main()
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    si.dwFlags = 0x00000001;
    si.wShowWindow = 0;
    LPCWSTR lpUsername = L"Not!"; 
    LPCWSTR lpDomain = L"Your!";
    LPCWSTR lpPassword = L"Business!"; 
    LPCWSTR lpApplicationName = L"[path to .exe]";
    LPCWSTR lpCurrentDirectory = L"C:\\";

    CreateProcessWithLogonW(lpUsername, lpDomain, lpPassword, 0x00000002, lpApplicationName, NULL, 0x04000000, NULL, lpCurrentDirectory, &si, &pi);
}
