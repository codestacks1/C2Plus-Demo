// CodeStacks.Book.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"
#include "Books.h"
#include <string>
#include <iostream>


using namespace std;

//int main()
//{
//	Books books = Books("Codestacks-2017-07-14");
//	Book book = books.GetBookInfo("xiaowen");
//
//	std::cout << book.name << book.author << book.price << book.publisher << book.ibsn;
//	std::cout << std::endl;
//
//	return 0;
//}


string BookEntry() {
		Books books = Books("Codestacks-2017-07-14");
		Book book = books.GetBookInfo("xiaowen");
	
		std::cout << book.name << book.author << book.price << book.publisher << book.ibsn;
		std::cout << std::endl;

		return book.name;
}
