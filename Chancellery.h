#pragma once
#include "Base.h"

class Chancellery : public Base {
public:
	Chancellery();
	Chancellery(char* name, char* author, int releaseYear, char* educFacility, int yearStudy, int size);
	Chancellery(Chancellery* orig);
	~Chancellery();

	void print();
	void setProduct();

	void setType(char* t);
	char* getType();
	void setColour(char* c);
	char* getColour();
	void setPurpose(char* p);
	char* getPurpose();
private:
	// Канцелярия : тип канцелярии, цвет, назначение
	char* type;
	char* colour;
	char* purpose;
};