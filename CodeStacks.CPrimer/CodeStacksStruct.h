#pragma once

/**
类声明在标准头文件中

**/

#include <string>

using namespace std;

class CodeStacksStruct
{
public://公开类
	CodeStacksStruct();
	CodeStacksStruct(int numbers);
	CodeStacksStruct(string s1, string s2, string s3);//每在头文件中增加一个重载、方法或变量，必须在对象文件里增加对应的重载、方法实现

	~CodeStacksStruct();//析构有且仅有一个就好

	void InitContext();
	int GetSummation(int i1, int i2);
	string Printer(string context);

	int sum;

	//这样写，没有太多的必要，写在析构函数上面就好
public:
	CodeStacksStruct(std::string flag);
};
