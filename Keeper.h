#pragma once
#include "Base.h"

class Keeper {
public:
	Keeper();
	Keeper(int count);
	Keeper(Keeper* orig);
	~Keeper();

	Base* getHead();
	void setHead(Base* head);

	void print();
	void eraseAll();

	void printProduct(int count);
	void addProduct();
	void takeProduct();          //������� ��������� ����� � ������
	void takeProduct(int count); //������� ����� ��� ������� count
	void editProduct(int count);

	void save();
	void restore();
private:
	Base* head;
};