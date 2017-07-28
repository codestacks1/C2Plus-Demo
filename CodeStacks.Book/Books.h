#pragma once

#include <string>
#include "Book.h"

using namespace std;


class Books
{
public:
	Books();
	Books(string ibsn);
	~Books();

	Book GetBookInfo(string name);
	string GetBookISBN(string name);

	Book book;
};

