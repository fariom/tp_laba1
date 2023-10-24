#pragma once
#include "Book.h"

class Base {
public:
	Base();
	Base(int price);
	Base(Base* orig);
	~Base();

	virtual void print();

	void setPrice(int new_price);
	int getPrice();
	virtual void setNext(Base* next);
	Base* getNext();
private:
	int price;
	char type; //m - �������   b - �����   c - ����������
	Base* next;
};