// TestStaticLib.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "StaticLibDemo.h"


int _tmain(int argc, _TCHAR* argv[])
{
	StaticLib *_ptr = new StaticLib();
	int _result = _ptr->sum(10, 20);
	std::cout << _result << std::endl;

	return 0;
}

