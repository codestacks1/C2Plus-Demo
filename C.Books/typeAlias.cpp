#include "stdafx.h"
#include "typeAlias.h"
#include "codestacks.h"
#include <iostream>


typeAlias::typeAlias()
{
}

void typeAlias::setTypeAlias()
{
	typedef double wages;
	typedef wages wage, *chang;

	double db = 10;
	const chang c = &db;

	std::cout << "c is " << c << std::endl;//address
	std::cout << "*c is " << *c << std::endl;//value
	std::cout << "&c is " << &c << std::endl;//address

	using copyChar = char;
	using pstring = char*;
	copyChar ch = ';';
	const pstring ctrs = 0;
	/*const pstring *p;*/

	std::cout << ch << std::endl;//output -> ;

	using css = codestacks;
	css().setPointer();

}


typeAlias::~typeAlias()
{
}
