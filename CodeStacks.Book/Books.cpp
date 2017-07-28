#include "stdafx.h"
#include "Books.h"

#include <string>


Books::Books()
{
}

Books::Books(string ibsn) {

}

string Books::GetBookISBN(string ibsn) {
	book.ibsn = ibsn;
	return book.ibsn;
}

/*
	根据书名获取该书信息
*/
Book Books::GetBookInfo(string name) {
	book.name = name;
	book.author = "codestacks";
	book.price = 23.50;
	book.publisher = "人民大学出版社";
	book.ibsn = "codestacks-2017-07-14";
	return book;
}

Books::~Books()
{
}
