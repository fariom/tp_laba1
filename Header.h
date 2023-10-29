#pragma once
#include <locale.h>
#include <iostream>

void pressEnter();

void pressEnter() {
    while (getchar() != '\n')
        continue;
    std::cout << "Нажмите <Enter>, чтобы продолжить..." << std::endl;
    while (getchar() != '\n')
        continue;
    std::cin.clear();
    system("CLS");
}