#include "Keeper.h"
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Keeper* shop = new Keeper;
	shop->restore();

	while (true) {
		int choice;
		cout << "Книжный магазин. Действия:\n";
		cout << "1) Вывести ассортимент магазина на экран\n";
		cout << "2) Показать данные об определённом товаре\n";
		cout << "3) Добавить товар в магазин\n";
		cout << "4) Убрать товар из магазина\n";
		cout << "5) Изменить данные о товаре\n";
		cout << "6) Очистить ассортимент магазина\n\n";
		cout << "0) Выйти из магазина\n";
		cin >> choice;
		system("CLS");
		switch (choice) {
		case 1:
		{
			if (shop->getSize() == 0)
				cout << "Ассортимент магазина пуст" << endl;
			else {
				cout << "Ассортимент магазина:" << endl;
				shop->print();
			}
			break;
		}
		case 2:
		{
			cout << "Номер товара?" << endl;
			int num;
			cin >> num;
			if (num > shop->getSize())
				cout << "Нет товара с таким номером" << endl;
			else
				shop->printProduct(num);
			break;
		}
		case 3:
		{
			cout << "Добавить ...\n\n";
			cout << "	1) Книгу\n";
			cout << "	2) Учебник\n";
			cout << "	3) Канцелярию\n";
			cin >> choice;
			if (choice >= 1 && choice <= 3)
				shop->addProduct(choice);
			else
				cout << "\nНекорректный ввод, попробуйте ещё раз\n" << endl;
			break;
		}
		case 4:
		{
			cout << "Номер товара?" << endl;
			int num;
			cin >> num;
			if (num > shop->getSize())
				cout << "Нет товара с таким номером" << endl;
			else
				shop->takeProduct(num);
			break;
		}
		case 5:
		{
			cout << "Номер товара?" << endl;
			int num;
			cin >> num;
			if (num > shop->getSize())
				cout << "Нет товара с таким номером" << endl;
			else
				shop->editProduct(num);
			break;
		}
		case 6:
		{
			shop->eraseAll();
			cout << "Ассортимент очищен" << endl;
			break;
		}
		case 0: {
			shop->save();
			return 0;
		}
		default: {
			cout << "Некорректный ввод, попробуйте ещё раз" << endl;
			break;
		}
		}
		pressEnter();
	}
};