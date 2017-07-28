#pragma once
#include <agents.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace::Concurrency;
using namespace::std;

class agent2 :public agent
{
public:
	explicit agent2(ISource<wstring> &source, ITarget<int> &target);
	~agent2();

protected:
	void run();

private:
	ISource<wstring> &_source;
	ITarget<int> &_target;
};

