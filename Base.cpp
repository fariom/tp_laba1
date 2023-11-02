#include "Base.h"

Base::Base() {
	price = 0;
	type = 'B';
};
Base::Base(int p, char t) {
	price = p;
	type = t;
};
Base::Base(Base* orig) {
	price = orig->getPrice();
	type = orig->getType();
};
Base::~Base() {};
////////////////////////////////

void Base::setPrice(int new_price) {
	price = new_price;
};
int Base::getPrice() {
	return price;
};
void Base::setType(char s) {
	type = s;
};
char Base::getType() {
	return type;
};

void Base::printFullType() {
	switch (type) {
	case 'B':{
		cout << "Книга";
		break;
	}
	case 'M': {
		cout << "Учебник";
		break;
	}
	case 'C': {
		cout << "Канцелярия";
		break;
	}
	}
};
////////////////////////////////
void Base::copyWord(char* orig, char* copy) {
	int i = 0;
	while ((copy[i] = orig[i++]) != '\0');
}
void Base::getWord(char* word, int count) {
	char c;
	int i;
	for (i = 0;(i < count - 1) && ((c=getchar()) != '\n');word[i++] = c)
		;
	word[i] = '\0';
	if (i == count - 1) {
		while ((c = getchar()) != '\n');
	}
};
void Base::getWordF(ifstream& fin, char* word, int count) {
	char c;
	int i = 0;
	while (((c = fin.get()) != '\n') && (!fin.eof()) && (i < count - 1)) {
		word[i++] = c;
	};
	word[i] = '\0';
	if (i == count - 1) {
		while ((c = fin.get()) != '\n');
	}
};