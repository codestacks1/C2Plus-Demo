#include "stdafx.h"
#include "constExpression.h"


constExpression::constExpression()
{
}

int i = 20;
constexpr int j = 21;//常量表达式
void constExpression::setConstExpression()
{
	constexpr int *np = nullptr;
	constexpr const int *p = &j;//注意i必须定义在函数外面
	constexpr int *pp = &i;
}

constExpression::~constExpression()
{
}
