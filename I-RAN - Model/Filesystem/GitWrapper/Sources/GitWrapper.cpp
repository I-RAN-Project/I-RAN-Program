#include "..\Headers\GitWrapper.hpp"

IRAN::Model::Filesystem::GitWrapper::GitWrapper::GitWrapper()
{
	runExecutable = new RunExecutables;
}

IRAN::Model::Filesystem::GitWrapper::GitWrapper::~GitWrapper()
{
	delete runExecutable;
}

//We assume you've already made a 'temp' file, if not screw off
int IRAN::Model::Filesystem::GitWrapper::GitWrapper::RunGitCommand(std::wstring command, std::wstring enviroment, bool isBlocking)
{
	std::fstream batfile("temp\\thisGitCommand.bat", std::fstream::out);

	if (!batfile)
	{
		std::cerr << L"Could not open file.\n";
		return -1;
	}
				 
	batfile << "cd " << std::string(enviroment.begin(), enviroment.end()) << "\n";
	batfile << "\"" << boost::filesystem::current_path().string() << "\\GitPortable\\bin\\git.exe" << "\" " << std::string(command.begin(), command.end()) << "\n";
	//batfile << "pause" << "\n";

	batfile.close();

	return runExecutable->RunExecutable(L"", L"cmd.exe /C " + boost::filesystem::current_path().wstring() + L"\\temp\\thisGitCommand.bat", boost::filesystem::current_path().wstring(), isBlocking);
}