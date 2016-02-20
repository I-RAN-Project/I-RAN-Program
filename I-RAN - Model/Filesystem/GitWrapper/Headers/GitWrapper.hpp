#ifndef GITWRAPPER_HPP
#define GITWRAPPER_HPP

#define WINDOWS_LEAN_AND_MEAN

#include "..\..\..\I-RANModelDLL.hpp"

#include <cstdlib>
#include <string>

#include <iostream>
#include <fstream>
#include <boost\filesystem.hpp>

#include "..\..\Headers\RunExecutables.hpp"

namespace IRAN
{
	namespace Model
	{
		namespace Filesystem
		{
			namespace GitWrapper
			{
				class IRANMODELDLL_API GitWrapperImpl
				{
				public:
					virtual int RunGitCommand(std::wstring, std::wstring, bool) = 0;
				private:

				};

				class IRANMODELDLL_API GitWrapper : public GitWrapperImpl
				{
				public:
					GitWrapper();
					~GitWrapper();

					int RunGitCommand(std::wstring, std::wstring, bool);
				private:
					RunExecutablesImpl *runExecutable;
				};
			}
		}
	}
}

#endif // GITWRAPPER_HPP
