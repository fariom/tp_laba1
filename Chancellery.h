#pragma once
#include "Bookstore.h"

class Chancellery : public Bookstore {
public:
	Chancellery();
	Chancellery(char* t, char* c, char* p);
	Chancellery(Chancellery* orig);
	~Chancellery();

	void print();
	void setProduct();
	void getFromFile(ifstream& fin);
	void printInFile(ofstream& fout);

	void setTypeOf(char* tO);
	char* getTypeOf();
	void setColour(char* c);
	char* getColour();
	void setPurpose(char* p);
	char* getPurpose();
private:
	// Канцелярия : тип канцелярии, цвет, назначение
	char* typeOf;
	char* colour;
	char* purpose;
};
