#include "stdafx.h"
#include "agent1.h"


/*
	constructor
*/
agent1::agent1(ISource<int> &source, ITarget<wstring> &target)
	:_source(source), _target(target)
{

}

void agent1::run() {

	wstringstream ss;
	ss << L"agent1:sending request..." << endl;
	wcout << ss.str();

	send(_target, wstring(L"request"));

	//read the response
	int response = receive(_source);

	ss = wstringstream();
	ss << L"agent1:received'" << response << L"'." << endl;
	wcout << ss.str();

	//Move the agent to the finished state.
	done();

}

agent1::~agent1()
{

}


