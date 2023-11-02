#pragma once
#include <locale.h>
#include <iostream>
#include <Windows.h>

void pressEnter();

void pressEnter() {
    putchar('\n');
    std::cout << "Нажмите <Enter>, чтобы продолжить..." << std::endl;
    while (getchar() != '\n')
        continue;
    std::cin.clear();
    system("CLS");
}