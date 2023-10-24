#pragma once
#include <locale.h>
#include <iostream>

void pressEnter();

void pressEnter() {
    while (getchar() != '\n')
        continue;
    cout << "Нажмите <Enter>, чтобы продолжить..." << endl;
    while (getchar() != '\n')
        continue;
    cin.clear();
    system("CLS");
}