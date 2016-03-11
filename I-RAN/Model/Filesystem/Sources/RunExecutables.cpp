#include "../Headers/RunExecutables.hpp"

IRAN::Controller::Filesystem::RunExecutables::RunExecutables()
{

}

IRAN::Controller::Filesystem::RunExecutables::~RunExecutables()
{

}

/*
 * Not Cross platform... v_v
 *
 * Supports:
 * * Windows Vista/7/8/8.1/10
 * * Windows Server 2003
 * * Windows Xp with SP2
 */

int IRAN::Controller::Filesystem::RunExecutables::RunExecutable(std::wstring executable, std::wstring enviroment, bool isBlocking)
{
	return RunExecutable(executable, L"", enviroment, isBlocking);
}

/*
 * Always returns a 0 on nonblocking mode. Sorry.
 */
/*
 * Todo: Pass back the handle on non blocking mode.
 * For the rare occasion you wanna run multiple reprocesses then wait for em' all to finish.
 */

int IRAN::Controller::Filesystem::RunExecutables::RunExecutable(std::wstring executable, std::wstring arguments, std::wstring enviroment, bool isBlocking)
{
	//Srsly windows, why must I use your stupid special string types? 
	LPCWSTR executableLocation = executable.c_str();
	LPCWSTR executableEnviroment = enviroment.c_str();
	LPWSTR executableArguments = &arguments[0u];

	if (executable == L"")
	{
		executableLocation = nullptr;
	}

	STARTUPINFO startupInfo;
	PROCESS_INFORMATION processInfo;

	memset(&startupInfo, 0, sizeof(startupInfo));
	memset(&processInfo, 0, sizeof(processInfo));

	ZeroMemory(&startupInfo, sizeof(startupInfo));
	startupInfo.cb = sizeof(startupInfo);

	ZeroMemory(&processInfo, sizeof(processInfo));

	if (!CreateProcess(executableLocation, executableArguments, nullptr, nullptr, false, CREATE_NEW_CONSOLE, nullptr, executableEnviroment, &startupInfo, &processInfo))
	{
		std::wcerr << "RunExecutable failed (" << GetLastError() << ").\n";
		return 1;
	}

	ULONG rc = 0;
	if (isBlocking) 
	{ 
		WaitForSingleObject(processInfo.hProcess, INFINITE); 
		if (!GetExitCodeProcess(processInfo.hProcess, &rc))
		{
			rc = 0;
		}
	}

	// Close process and thread handles. 
	CloseHandle(processInfo.hProcess);
	CloseHandle(processInfo.hThread);
	
	return rc;
}