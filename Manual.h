#pragma once
#include "Base.h"

class Manual : public Base {
public:
	Manual();
	Manual(char* name, char* author, int releaseYear, char* educFacility, int yearStudy, int size);
	Manual(Manual* orig);
	~Manual();

	void print();
	void setProduct();

	void setName(char* n);
	char* getName();
	void setAuthor(char* a);
	char* getAuthor();
	void setReleaseYear(int rY);
	int getReleaseYear();
	void setEducFacility(char* eF);
	char* getEducFacility();
	void setYearStudy(char* yS);
	int getYearStudy();
	void setSize(int s);
	int getSize();
private:
	// Учебник: название, автор, год выпуска, для какого учебного заведения предназначено,
	//          год обучения, объем страниц
	char* name;
	char* author;
	int releaseYear;
	char* educFacility;
	int yearStudy;
	int size;
};