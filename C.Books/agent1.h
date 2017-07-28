#pragma once
#include <agents.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace::Concurrency;
using namespace::std;

class agent1 :public agent
{
protected:
	void run();

public:
	explicit agent1(ISource<int> &source, ITarget<wstring> &target);
	~agent1();

private:
	ISource<int> &_source;
	ITarget<wstring> &_target;
};

