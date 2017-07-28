#include "stdafx.h"
#include "IntelliPointer.h"
#include "codestacks.h"
#include <memory>

#include <iostream>

/*
智能指针
*/

IntelliPointer::IntelliPointer()
{
}

void IntelliPointer::setIntelliPointer()
{
	//
	std::unique_ptr<codestacks> up_cs(new codestacks());//智能指针
	//
	std::shared_ptr<codestacks> sp_cs(new codestacks());//智能指针

	up_cs->test();
	sp_cs->test();
}

void IntelliPointer::setIntelliPtr()
{
	//普通指针
	codestacks *cs = new codestacks("code", 20);
	cs->test();
	delete cs;

	//智能指针
	std::unique_ptr<codestacks> up1(new codestacks("code1", 21));
	up1->test();

	int i = 10;
	decltype(up1->returnInt()) sum = i;

	std::cout << sum << std::endl;

	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;
	decltype(cj)y = x;
	decltype(cj)z = 10;//注意 z是一个引用，必须初始化
	//需要指出的是，引用从来都作为其所指对象的同义词出现

	decltype((i)) d = i;//这是一个引用
	decltype(i) e;

	std::cout << d << std::endl;
	std::cout << (e = 11) << std::endl;
}

void IntelliPointer::setDeclType()
{
	int a = 3, b = 4;
	decltype(a) c = 30;
	decltype((b)) d = a;
	std::cout << a << " - " << b << " - " << c << " -" << d << " - " << ++c << " - " << (++d) << std::endl;
}

void IntelliPointer::setDeclType1()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
	std::cout << a << " + " << b << " + " << c << " + " << d << std::endl;
}

void IntelliPointer::setStructSalesData()
{
	//Sales_data accum = Sales_data();
	Sales_data accum, trans, *salesptr, &salesref = accum;
	accum.bookNo = "bookNo1";
	accum.revenue = 20.8;
	accum.units_sold = 234;

	std::cout << accum.bookNo << " " << accum.revenue << " " << accum.units_sold << std::endl;

	salesptr = &accum;
	salesptr->revenue = 28.8;
	salesptr->units_sold = 123456789;
	std::cout << salesptr->bookNo << " " << salesptr->revenue << " " << salesptr->units_sold << std::endl;

	std::cout << salesref.bookNo << salesref.revenue << " _ _ _ " << salesref.units_sold << std::endl;
}

void IntelliPointer::setStructsalesData1()
{
	Sales_data data1, data2;
	double price = 0;

	std::cout << "data1:\n isbn units_sold price" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cout << "data2:\n isbn units_sold price" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	std::cout << "result: " << std::endl;
	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;

	}
	else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;

	}
}

void IntelliPointer::getLine() {
	std::string line;
	while (std::getline(std::cin, line))
	{
		if (!line.empty() && line.size() > 2)
			std::cout << line << std::endl;//读入一种行
	}

	std::string::size_type len = 0;
	line.size();


	std::string str = str + "234" + "";
}

IntelliPointer::~IntelliPointer()
{
}
