#include "stdafx.h"
#include "constExpression.h"


constExpression::constExpression()
{
}

int i = 20;
constexpr int j = 21;//�������ʽ
void constExpression::setConstExpression()
{
	constexpr int *np = nullptr;
	constexpr const int *p = &j;//ע��i���붨���ں�������
	constexpr int *pp = &i;
}

constExpression::~constExpression()
{
}
