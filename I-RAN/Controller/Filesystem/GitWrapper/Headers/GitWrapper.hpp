#ifndef GitWrapper_Hpp
#define GitWrapper_Hpp

#define WINDOWS_LEAN_AND_MEAN

#include <cstdlib>
#include <string>

#include <iostream>

#include <boost/numeric/ublas/vector.hpp>
#include <boost/filesystem.hpp>

#include <boost/foreach.hpp>
#define foreach_b_  BOOST_FOREACH
#define foreach_br_ BOOST_REVERSE_FOREACH

#include <boost/interprocess/smart_ptr/unique_ptr.hpp>
#include <boost/make_unique.hpp>

#include "../../Headers/RunExecutables.hpp"

namespace IRAN
{
	namespace Controller
	{
		namespace Filesystem
		{
			namespace GitWrapper
			{
				class GitWrapperImpl
				{
				public:
					//For proper cleanup...
					virtual ~GitWrapperImpl() {};

					virtual int RunGitCommand(std::wstring command, std::wstring enviroment, bool isBlocking) = 0;
					virtual int RunBashScript(boost::numeric::ublas::vector<std::wstring> commands, std::wstring enviroment, bool isBlocking) = 0;
				private:

				};

				class GitWrapper : public GitWrapperImpl
				{
				public:
					GitWrapper();
					~GitWrapper();

					int RunGitCommand(std::wstring command, std::wstring enviroment, bool isBlocking);
					int RunBashScript(boost::numeric::ublas::vector<std::wstring> commands, std::wstring enviroment, bool isBlocking); //Gawd VS. It goddamn exists. See GitWapper.cpp.
				private:
					boost::interprocess::unique_ptr<RunExecutablesImpl> ptr;
				};
			}
		}
	}
}

#endif // GitWrapper_Hpp
