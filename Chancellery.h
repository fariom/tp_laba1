#pragma once
#include "Base.h"

class Chancellery : public Base {
public:
	Chancellery();
	Chancellery(char* type, char* colour, char* purpose);
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
