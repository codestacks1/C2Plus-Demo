#include "stdafx.h"
#include "CodeStacksStruct.h"

#include <string>
#include <iostream>

using namespace std;

CodeStacksStruct::CodeStacksStruct()
{
	InitContext();
}

CodeStacksStruct::CodeStacksStruct(int numbers) {

}

CodeStacksStruct::CodeStacksStruct(string context) {

}

CodeStacksStruct::CodeStacksStruct(string s1, string s2, string s3) {

}

CodeStacksStruct::~CodeStacksStruct() {

}



void CodeStacksStruct::InitContext() {
	std::string str = "codestacks";

	std::cout << str << std::endl;
	std::cout << str << "......" << std::endl;
}

int CodeStacksStruct::GetSummation(int i1, int i2) {
	sum = i1 + i2;
	return sum;
}

string CodeStacksStruct::Printer(string context) {
	return context;
}



struct PERSON
{
	int age;
	long ss;
	float weight;
	char name[25];
} family_member;

struct  CELL
{
	unsigned short charachter : 8;//00000000 ????????
	unsigned short foreground : 3;//00000??? 00000000
	unsigned short intensity : 1; //0000?000 00000000
	unsigned short background : 3;//0???0000 00000000
	unsigned short blink : 1;//?0000000 00000000
}screen[25][80];

