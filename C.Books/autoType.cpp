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
	auto item = v1 + v2;//auto����ı��������г�ʼֵ


	const auto a = v1;//���㳣��
	const auto a1 = &v1;//�ײ㳣��

	std::cout << "top-level const is " << a << std::endl;
	std::cout << "lost-level const is " << a1 << std::endl;
}

autoType::~autoType()
{
}
