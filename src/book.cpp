#include "book.h"

std::istream& operator>>(std::istream& in, Book& book)
{
	in >> book.pagesAmount >> book.name >> book.publishingYear >> book.price;
	return in;
}

std::ostream& operator<<(std::ostream& out, Book& book)
{
	out << "Book:\n"
		<< "\tname - " << book.name << "\n"
		<< "\tpages amount - " << book.pagesAmount << "\n"
		<< "\tpublishing year  - " << book.publishingYear << "\n"
		<< "\tprice - " << book.price << "\n";
		
}
