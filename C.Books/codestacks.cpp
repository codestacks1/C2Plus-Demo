#include "stdafx.h"
#include "codestacks.h"
#include "Sales_item.h"

#include <iostream>
//#include <string>

extern const int my_const = 10;
extern const int my_const1 = 100;



codestacks::codestacks()
{

}

codestacks::codestacks(std::string name, int age) {
	//std::cout << "name is " << name << ", age is " << age << std::endl;
	std::cout << "name is " << ", age is " << age << std::endl;
}


codestacks::~codestacks()
{
}

void codestacks::test() {
	std::cout << "test applicatoin" << std::endl;
}

int codestacks::returnInt() {
	return 1;
}

void codestacks::myif() {
	int currVal = 0, val = 0;
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currVal) {
				++cnt;
			}
			else {
				std::cout << currVal << "occurs" << cnt << "times" << std::endl;
			}
		}
		std::cout << currVal << "occurs" << cnt << "times" << std::endl;
	}
}

void codestacks::myfor() {
	for (size_t i = 10; i > 0; i--)
	{
		std::cout << i << std::endl;
	}
}

void codestacks::objectinstance() {

	Sales_item item;
	//std::cin >> item;
	//std::cout << item << std::endl;

}

void codestacks::compute() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}


void codestacks::datatype() {
	wchar_t wc = L'a';
	std::string unicode1 = u8"hi!";
	char* c = u8"hi!";
	unsigned long long ull = 42ULL;
	float fl = 1e-2F;
	float f2 = 4;
	long double ld = 3.141592L;

	int month = 9, day = 7;
	int month1 = 0, day1 = 07;//8½øÖÆ
	std::cout << month << "---" << day << std::endl;
	std::cout << month1 << "+++" << day1 << std::endl;

	int units_sold{ 10 };
	int units_sola1 = 10;
}

struct Chrysanthemum
{
	short i;
};

void codestacks::typeRefernce() {
	int ival = 1024;
	int &refVal = ival;

	Chrysanthemum ch;
	Chrysanthemum& chRef = ch;

	Chrysanthemum* chr = new Chrysanthemum();





}



void codestacks::datapointer()
{
	int __xiaowen = 99;
	volatile int *_xiaowen;
	const int *xiaowen;
	int _xiao_wen = 919;

	_xiaowen = &__xiaowen;
	xiaowen = &_xiao_wen;
	//xiaowen = &__xiaowen;

	printf_s("*_xiaowen is %d\n", *_xiaowen);
	printf_s("*xiaowen is %d\n", *xiaowen);
	printf_s("__xiaowen is %d\n", __xiaowen);
	printf_s("_xiao_wen is %d\n", _xiao_wen);


	int i = 1, j = 2;
	int* p;
	p = &j;

	int* ip = &i;
	int& ipp = j;
	int* pointer = &ipp;

	//printf_s("0x %p\n", p);
	//printf_s("0x %p %d\n", p, *p);
	//printf_s("j is %d\n", j);
	//printf_s("ip is %d\n", ip);
	//printf_s("ip is %d\n", *ip);
	//printf_s("reference is %d\n", &ip);
	//printf_s("ref is %d\n", &ipp);
	//printf_s("pointer value is %d\n", *pointer);
}

void codestacks::setPointer()
{
	int i = 10;
	std::string s = "string";

	int* iPointer = &i;
	std::string* sPointer = &s;
	std::string s1 = s;

	//printf_s("iPointer is == %d\n", iPointer);
	//printf_s("sPointer is == %s\n", sPointer);
	//printf_s("*iPointer is == %d\n", *iPointer);
	//printf_s("*sPointer is == %s\n", *sPointer);
	//printf_s("&sPointer is == %S\n", &sPointer);
	//printf_s("&s is == %s\n", s);
	//printf_s("s1 is == %s\n", s1);

	std::cout << iPointer << std::endl;
	std::cout << sPointer << std::endl;
	std::cout << *iPointer << std::endl;
	/*std::cout << s << std::endl;*/
	std::cout << &sPointer << std::endl;
	//std::cout << s1 << std::endl;


	//std::cout << s1.c_str << std::endl;


}

