//
//	StaticLibDemo.h
//	Static Lib
//	
//	Created by Michael Ge on 2014-10-23
//	Copyright (c) 2014 Michael Ge. All rights reserved.
//

#include <iostream>

#ifdef OS_WIN

#ifdef DLL_PROJECT
#define DLL_API		__declspec(dllexport)
#else
#define DLL_API		__declspec(dllimport)
#endif

#else

#define DLL_API

#endif

class DLL_API StaticLib
{
public:
	int sum(int, int);
};