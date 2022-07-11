// Bookshop class is created for possible further adjustments. 
// Maybe there would arise an idea of some functionality expansion 
// like adding customers to bookshop, employees, etc.

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

	~Bookshop() { }

	void addBook(const Book& newBook)
	{
		books.push_back(newBook);
	}

	void displayBooks(std::ostream& out)
	{
		for (Book book : books)
			out << book;
	}
};

#endif