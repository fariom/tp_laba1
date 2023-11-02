#include "Keeper.h"

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
	for (int i = 1;i <= size;++i) {
		cout << "#" << i << "  ";
		printProduct(i);
		cout << "\n\n";
	}
};
void Keeper::eraseAll() {
	while (size > 0) {
		takeProduct(size);
	}
};
void Keeper::checkLimit() {
	if (size == limit) {
		limit += 5;
	}
	else if ((size == limit - 10) && (limit >= 10)) {
		limit -= 5;
	}
	else {
		return;
	}

	Base** newBookStore = new Base * [limit];
	for (int i = 0;i < size;++i) {
		newBookStore[i] = bookStore[i];
	}
	delete[] bookStore;
	bookStore = newBookStore;
}

void Keeper::printProduct(int count) {
	bookStore[count - 1]->printFullType();
	putchar('\n');
	bookStore[count - 1]->print();
};
void Keeper::addProduct(int type) {
	checkLimit();
	switch (type) {
	case 1: {
		bookStore[size] = new Book;
		bookStore[size]->setType('B');
		break;
	}
	case 2: {
		bookStore[size] = new Manual;
		bookStore[size]->setType('M');
		break;
	}
	case 3: {
		bookStore[size] = new Chancellery;
		bookStore[size]->setType('C');
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
	bookStore[count-1]->setProduct();
};
////////////////////////////////
void Keeper::save() {
	ofstream fout;
	fout.open("BookStore.txt");
	for (int i = 0;i < size;i++) {
		bookStore[i]->printInFile(fout);
	}
	fout.close();
};
void Keeper::restore() {
	ifstream fin;
	fin.open("BookStore.txt");
	int i = 0;
	char type;
	while (!fin.eof()) {
		checkLimit();
		fin.get(type);
		fin.get();
		switch (type) {
		case 'B': {
			bookStore[size] = new Book;
			break;
		}
		case 'M': {
			bookStore[size] = new Manual;
			break;
		}
		case 'C': {
			bookStore[size] = new Chancellery;
			break;
		}
		default: {
			std::cout << "Error\n";
			return;
		}
		}

		bookStore[size]->setType(type);
		bookStore[size++]->getFromFile(fin);
	}
	size--;
	fin.close();
};