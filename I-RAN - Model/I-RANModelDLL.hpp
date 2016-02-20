#ifndef IRANMODELDLL_HPP
#define IRANMODELDLL_HPP

#ifdef DLL_EXPORTS
#define IRANMODELDLL_API __declspec(dllexport) 
#else
#define IRANMODELDLL_API __declspec(dllimport) 
#endif

#endif // IRANMODELDLL_HPP
