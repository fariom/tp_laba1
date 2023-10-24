#include "Keeper.h"
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Keeper* shop = new Keeper;
	shop->restore();
	while (true){
	int choice;
	cout << "Книжный магазин. Действия:\n";
	cout << "1) Вывести ассортимент магазина на экран\n";
	cout << "2) Показать данные об определённом товаре\n";
	cout << "3) Добавить товар в стопку\n";
	cout << "4) Убрать товар из стопки\n";
	cout << "5) Изменить данные о товаре\n";
	cout << "6) Очистить ассортимент магазина\n\n";
	cout << "0) Выйти из магазина\n";
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
			cout << "Некорректный ввод, попробуйте ещё раз" << endl;
			break;
	}
	pressEnter();
	}
	return 0;
};