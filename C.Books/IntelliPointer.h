#pragma once

#include <iostream>


class IntelliPointer
{
public:
	IntelliPointer();
	void setIntelliPointer();
	void setIntelliPtr();
	void setDeclType();
	void setDeclType1();
	void setStructSalesData();
	void setStructsalesData1();
	void getLine();
	~IntelliPointer();
};


/*
预处理器：头文件保护符

*/
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data
{
	std::string bookNo = "GH11010";
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif // SALES_DATA_H
