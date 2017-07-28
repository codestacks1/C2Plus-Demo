#include "stdafx.h"
#include "agent2.h"


agent2::agent2(ISource<wstring> &source, ITarget<int> & target)
	:_source(source), _target(target)
{
}

void agent2::run() {
	wstring request = receive(_source);

	wstringstream ss;
	ss << L"agent2:received'" << request << L"'." << endl;
	wcout << ss.str();

	//Send the response
	ss = wstringstream();
	ss << L"agent2:sending response..." << endl;
	wcout << ss.str();

	send(_target, 42);

	//Move the agent to the finished state
	done();
}

agent2::~agent2()
{
}
