#pragma once

class Base {
public:
	Base();
	Base(int price);
	Base(Base* orig);
	~Base();

	virtual void print() = 0;
	virtual void setProduct() = 0;

	void setPrice(int new_price);
	int getPrice();
	void setType(char s);
	char getType();
private:
	int price;
	char type; //m - учебник   b - книга   c - канцелярия
};             //manual        book        chancellery