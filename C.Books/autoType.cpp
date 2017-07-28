#include "stdafx.h"
#include "autoType.h"
#include <iostream>

autoType::autoType()
{
}

void autoType::setAutoType()
{
	int v1 = 10, v2 = 10;
	std::string str = "str";
	auto item = v1 + v2;//auto定义的变量必须有初始值


	const auto a = v1;//顶层常量
	const auto a1 = &v1;//底层常量

	std::cout << "top-level const is " << a << std::endl;
	std::cout << "lost-level const is " << a1 << std::endl;
}

autoType::~autoType()
{
}
