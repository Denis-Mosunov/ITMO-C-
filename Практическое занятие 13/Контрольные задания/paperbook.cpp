#include "paperbook.h"
#include <iostream>

void Paperbook::getdata() {
    std::cout << "Введите название книги: ";
    std::cin >> title;
    std::cout << "Введите цену: ";
    std::cin >> price;
    std::cout << "Введите количество страниц: ";
    std::cin >> pages;
}

void Paperbook::putdata() const {
    std::cout << "Книга: " << title 
              << "\nЦена: " << price
              << "\nСтраниц: " << pages << std::endl;
}

void Paperbook::showSpecial() const {
    std::cout << "Особенность книги: " << pages << " страниц знаний!" << std::endl;
}
