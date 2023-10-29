#include "Keeper.h"
#include "Header.h"
Keeper::Keeper() {
	bookStore = new Base * [5];
	limit = 5;
	size = 0;
};
Keeper::Keeper(int count) {
	bookStore = new Base * [count];
	limit = count;
	size = 0;
};
Keeper::Keeper(Keeper* orig) {
	this->setLimit(orig->getLimit());
	this->setSize(orig->getSize());
	bookStore = new Base * [limit];
	for (int i = 0;i < size;++i) {
		this->bookStore[i] = orig->bookStore[i];
	}
};
Keeper::~Keeper() {
	eraseAll();
	delete[] bookStore;
};
////////////////////////////////
void Keeper::setLimit(int count) {
	limit = count;
};
int Keeper::getLimit() {
	return limit;
};
void Keeper::setSize(int count) {
	size = count;
};
int Keeper::getSize() {
	return size;
};
////////////////////////////////
void Keeper::print() {
	for (int i = 0;i < size;++i) {
		printProduct(i);
	}
};
void Keeper::eraseAll() {
	while (size != 0) {
		takeProduct(size - 1);
		--size;
	}
};
void Keeper::checkLimit() {
	if (size == limit) {
		limit += 5;
	}
	else if ((size == limit - 10) && (limit >= 10)) {
		limit -= 5;
	}
	else
		return;

	Base** newBookStore = new Base * [limit];
	for (int i = 0;i < size;++i) {
		newBookStore[i] = bookStore[i];
	}
	delete[] bookStore;
	bookStore = newBookStore;
}

void Keeper::printProduct(int count) {
	bookStore[count]->print();
};
void Keeper::addProduct(int type) {
	checkLimit();
	switch (type) {
	case 1: {
		bookStore[size++] = new Book;
		break;
	}
	case 2: {
		//bookStore[size++] = new Manual;
		break;
	}
	case 3: {
		//bookStore[size++] = new Chancellery;
		break;
	}
	default: {
		std::cout << "Error\n";
		return;
	}
	}
	bookStore[size++]->setProduct();
};
void Keeper::takeProduct(int count) {
	checkLimit();
	--count;
	delete bookStore[count];
	while (count + 1 < size) {
		bookStore[count] = bookStore[count + 1];
		++count;
	}
	bookStore[count] = nullptr;
	--size;
};
void Keeper::editProduct(int count) {
	bookStore[count]->setProduct();
};
////////////////////////////////
void Keeper::save() {};
void Keeper::restore() {};