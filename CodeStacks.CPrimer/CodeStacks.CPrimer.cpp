// CodeStacks.CPrimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CodeStacksStruct.h"


#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<wchar_t, int> myMap;

int main()
{

#pragma region MyRegion
	//(std::cout << "Enter two numbers:") << std::endl;
//int v1 = 0, v2 = 0;
//std::cin >> v1 >> v2;
//(std::cout << "The sum of" << v1 << "and" << v2 << " is " << v1 + v2) << std::endl;


//std::cout << "Enter one number";
//std::cout << std::endl;

//int sum = 0, val = 1;
//while (val < 10)
//{
//	sum += val;
//	++val;
//}

//std::cout << "Sum of 1 to 10 inclusive is ";
//std::cout << sum;
//std::cout << std::endl;


//for (size_t i = 0; i < 10; i++)
//	sum += val;

//std::cout << "Sum of 1 to 10 inclusive is ";
//std::cout << sum;
//std::cout << std::endl;


//int _sum = 0, value = 0;
//while (std::cin >> value)//Óöµ½´íÎó¼´Ìø³öÑ­»·
//	_sum += value;
//std::cout << "Sum is: " << _sum << std::endl;


/*std::cerr << "Data must refer to same ISBN" << std::endl;*/

//int currVal = 0, _val = 0;
//if (std::cin >> currVal)
//{
//	int cnt = 1;
//	while (std::cin >> _val)
//	{
//		if (_val == currVal)
//			++cnt;
//		else
//			std::cout << currVal << " occurs "
//			<< cnt << " times " << std::endl;

//		currVal = _val;
//		cnt = 1;
//	}
//}


/*Sales_item book;
std::cin >> book;
std:cout << book << std::endl;*/


/*bool b = true;
char c = 'c';
wchar_t wt = '×Ö';
char16_t c16 = 'c';
char32_t c32 = 'ÎÄ×Ö';
short s = 12345678;
int i = 12345678901234567890;
long l = 12345678901234567890;
long long ll = 1234567812345678;*/
#pragma endregion

/*unsigned u = 10;
int i = -42;
std::cout << u + i << std::endl;*/

/*std::string empty;
First *f = new First();

First ff = First();
ff.setNumber(17);*/

//int i1 = 0, i2 = 0;

//CodeStacksStruct codestacks = CodeStacksStruct();
////codestacks.InitContext();

//std::cin >> i1;
//std::cin >> i2;
//std::cout << codestacks.GetSummation(i1, i2);
//std::cout << std::endl;

//std::cout << "---***---" << std::endl;
//std::cout << codestacks.sum << std::endl;
	//CodeStacksStruct cs;
	CodeStacksStruct* pcs = new CodeStacksStruct(1);

	auto \u30AD = 42;

	delete pcs;


	map<int, string> items = map<int, string>();
	items[0] = "first";
	items[1] = "second";
	items[2] = "third";
	items[3] = "fourth";
	items[4] = "fifth";

	myMap c1;

	for (size_t i = 0; i < items.size(); i++)
	{
		std::cout << items[i] << "------" << std::endl;
	}







	return 0;
}


#define TRUE = 1

class First {
public:
	First(void) {
		_num = 4;
		_bark = true;
	}

	void setNumber(int size) {
		_num = size;
		std::cout << size << std::endl;
	}

private:
	string _var1, var2;
	int _num;
	bool _bark;
};

class  Second {
public: Second() {
	s1 = "cout s1";
	s2 = "cout s2";
}

protected: string s1, s2;

};



struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

