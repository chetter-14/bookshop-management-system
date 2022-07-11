#include "book.h"

std::istream& operator>>(std::istream& in, Book& book)
{
	in >> book.pagesAmount >> book.name >> book.publishingYear >> book.price;
	return in;
}
