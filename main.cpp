#include "Keeper.h"
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Keeper* shop = new Keeper;
	shop->restore();
	while (true){
	int choice;
	cout << "������� �������. ��������:\n";
	cout << "1) ������� ����������� �������� �� �����\n";
	cout << "2) �������� ������ �� ����������� ������\n";
	cout << "3) �������� ����� � ������\n";
	cout << "4) ������ ����� �� ������\n";
	cout << "5) �������� ������ � ������\n";
	cout << "6) �������� ����������� ��������\n\n";
	cout << "0) ����� �� ��������\n";
	cin >> choice;
	switch(choice){
		case 1:
		{
			shop->print();
			break;
		}
		case 2:
		{
			int num; //init
			shop->printProduct(num);
			break;
		}
		case 3:
		{
			shop->addProduct();
			break;
		}
		case 4:
		{
			int num; //init
			shop->takeProduct(num);
			break;
		}
		case 5:
		{
			int num; //init
			shop->editProduct(num);
			break;
			break;
		}
		case 6:
		{
			shop->eraseAll();
			break;
		}
		case 0: {
			return 0;
			break;
		}
		default:
			cout << "������������ ����, ���������� ��� ���" << endl;
			break;
	}
	pressEnter();
	}
	return 0;
};