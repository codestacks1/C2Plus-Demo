#pragma once

#include <string>
using namespace std;

class book
{
public:
	book();
	~book();
};

struct  bookInfo
{
	string isbn;
	int count;
	float price;
};