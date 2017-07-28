// C.Books.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "codestacks.h"
#include "constExpression.h"
#include "typeAlias.h"
#include "autoType.h"
#include "IntelliPointer.h"
#include <memory.h>
#include <memory>


#include "Utilities.h"
#include "agent1.h"
#include "agent2.h"


int main()
{
#pragma region MyRegion
	/*std::cout << "Enter two numbers" << std::endl;
int v1 = 0, v2 = 0;
std::cin >> v1 >> v2;
std::cout << "the sum is" << v1 + v2 << std::endl;

std::cout << "Hello world" << std::endl;
std::cout << v1*v2 << "---" << v1 + v2 << std::endl;

collection();*/

//readuserinput();

//codestacks stacks;
//stacks.test();//调用成员函数

//(codestacks()).test();//
//(codestacks()).compute();

//wchar_t s;
//char16_t t; char32_t t32;
//short sh;
//long long ll; long double ld;

//std::cout << i << std::endl;
//int i = 100;
//std::cout << i << std::endl;
//int j = i;

//std::cout << j << std::endl;

/*codestacks stacks;
stacks.datapointer();*/

//(codestacks()).setPointer();

/*int _myconst = my_const;
int _myconst1 = my_const1;

std::cout << _myconst << std::endl;
std::cout << _myconst1 << std::endl;


int errNumb = 0;
int *const curErr = &errNumb;
const double pi = 3.14159;
const double *const pip = &pi;

errNumb = 1;

if (*curErr)
{
	std::cout << "success" << std::endl;
}
else
{
	std::cout << "failes" << std::endl;
}*/


//int i = -1, &r = 0;
//const int i1 = -1, &r1 = 0;
//const int i2 = i, &r2 = i;
//int *const p2 = &i2;



/*int i = 43;
int* i1 = &i;
int ati = 55;

int &i = ati;

int *p1, *p2;
int *p11, p22;

int **p111 = &p1;
int **p222 = &p11;

int *&p = p1;

int* s = &i;
std::cout << *i1;

int* i2 = NULL;*/

//int p = 1;
//const int const *p2 = &p;

//int i, *const cp = &p;

//codestacks cs;
//int csi = cs.size();

//constexpr int mf = 20;
//constexpr int limit = mf + 1;
//constexpr int sz = csi;

//constexpr int *s1 = nullptr;  
#pragma endregion

	//typeAlias().setTypeAlias();

	//autoType *au = new autoType;
	//au->setAutoType();

	//std::cout << "top-----------------------" << std::endl;

	//autoType _au = autoType();
	//_au.setAutoType();

	//std::cout << "top1-----------------------" << std::endl;
	//autoType *au1 = &_au;
	//au1->setAutoType();

	//std::cout << "-----------------------" << std::endl;

	//autoType().setAutoType();

	//std::cout << "bottom-----------------------" << std::endl;

	//delete au;
	//delete au1;

	//autoType* at = new autoType();

	////uniqe_ptr<autoType> up();
	//std::shared_ptr<autoType> sp(new autoType());
	//std::unique_ptr<autoType> up(new autoType());

	/*IntelliPointer *iptr = new IntelliPointer();
	iptr->setIntelliPtr();*/

	std::shared_ptr<IntelliPointer> sp(new IntelliPointer());
	//sp->setIntelliPtr();
	//sp->setDeclType();
	//sp->setStructSalesData();
	//sp->setStructsalesData1();
	//sp->getLine();

	std::unique_ptr<Utilities> ul(new Utilities());
	//ul->setVector();
	//return ul->setVectorDemo();
	//return ul->setParallelism();

	unbounded_buffer<wstring> buffer1;
	overwrite_buffer<int> buffer2;

	agent1 first_agent(buffer2, buffer1);
	agent2 second_agent(buffer1, buffer2);

	first_agent.start();
	second_agent.start();

	agent::wait(&first_agent);
	agent::wait(&second_agent);

}



void collection() {
	int v = 1, sum = 0;
	while (v < 10)
	{
		sum += v;
		v++;
	}
	std::cout << "while" << sum << std::endl;
}


void collection1() {
	int v1 = 50, sum = 0;
	while (v1 <= 100)
	{
		sum += v1;
		v1++;
	}
	std::cout << "50 -> 100" << sum << std::endl;
}


void readuserinput() {
	int v1 = 0, sum = 0;
	try
	{
		while (std::cin >> v1)
		{
			sum += v1;
		}
	}
	catch (const std::exception&)
	{

	}
	std::cout << "sum is = " << sum << std::endl;
}