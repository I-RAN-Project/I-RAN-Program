#ifndef GITWRAPPER_HPP
#define GITWRAPPER_HPP

#define WINDOWS_LEAN_AND_MEAN

#include "..\..\..\I-RANModelDLL.hpp"

#include <cstdlib>
#include <string>

#include <iostream>

#include <boost/numeric/ublas/vector.hpp>
#include <boost\filesystem.hpp>

#include <boost\foreach.hpp>
#define foreach_b_  BOOST_FOREACH
#define foreach_br_ BOOST_REVERSE_FOREACH

#include <boost/interprocess/smart_ptr/unique_ptr.hpp>
#include <boost\make_unique.hpp>

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
					int RunBashScript(boost::numeric::ublas::vector<std::wstring>, std::wstring, bool); //Gawd VS. It goddamn exists. See GitWapper.cpp.
				private:

					// Because something in unique_ptr (not sure what, or how it works exactly) doesn't have a declspec it won't be exported. 
					// Problem is that the compiler _MIGHT_ try to inline it, and you can't inline something that doesn't exist (to GitWrapper, or the users of GitWrapper? I dunno.), 
					// So we have to put it in its own class.
					// 
					// Or at least I think thats the reason.
					// Please help me understand Warning C4251
					// :(
					//
					class runExecutableC {
					public:
						boost::interprocess::unique_ptr<RunExecutablesImpl> ptr;
					} runExecutable;
				};
			}
		}
	}
}

#endif // GITWRAPPER_HPP
