#pragma once
#ifndef UTILITIES_IO
#define UTILITIES_IO
#include <iostream>
#endif // !UTILITIES_IO
using namespace::std;

#include <amp.h>
using namespace::concurrency;

using namespace Concurrency;

class Utilities
{
public:
	Utilities();

	string setCCType();
	int setVector();
	int setVectorDemo();
	int setParallelism();
	int setGPUDebug1();

	~Utilities();
};

