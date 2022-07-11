#ifndef BOOKSHOP_H
#define BOOKSHOP_H

#include "book.h"
#include <list>
#include <iostream>


class Bookshop {

	std::list<Book> books;

public:
	Bookshop(std::istream& in)
	{
		Book book;
		while (in >> book)
			books.push_back(book);
	}

	~Bookshop() 
	{
		books.~list();
	}


};

#endif