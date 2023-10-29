#pragma once
#include "Base.h"
#include "Book.h"
#include "Manual.h"

class Keeper {
public:
	Keeper();
	Keeper(int count);
	Keeper(Keeper* orig);
	~Keeper();

	void setLimit(int count);
	int getLimit();
	void setSize(int count);
	int getSize();

	void print();
	void eraseAll();
	void checkLimit();

	void printProduct(int count);
	void addProduct(int type);
	void takeProduct(int count); //удалить товар под номером count
	void editProduct(int count);

	void save();
	void restore();
private:
	Base** bookStore;
	int size;
	int limit;
};