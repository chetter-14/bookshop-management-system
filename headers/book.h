#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {

	std::string name;
	int pagesAmount;
	int publishingYear;
	float price;

public:
	Book() 
	{ 
		pagesAmount = 0; 
		name = "";
		publishingYear = 0;
		price = 0.0f;
	}

	Book(int pagesAmount, const std::string& name, int publishingYear, float price)
	{
		this->pagesAmount = pagesAmount;
		this->name = name;
		this->publishingYear = publishingYear;
		this->price = price;
	}

	~Book() { }

	int getPagesAmount() { return pagesAmount; }

	const std::string& getName() { return name; }

	int getPublishingYear() { return publishingYear; }

	float getPrice() { return price; }

	friend std::istream& operator>>(std::istream& in, Book& book);
	friend std::ostream& operator<<(std::ostream& out, Book& book);
};

#endif