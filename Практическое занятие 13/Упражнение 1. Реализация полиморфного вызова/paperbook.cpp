#include "paperbook.h"
#include <iostream>

void Paperbook::getdata() {
    Item::getdata();
    std::cout << "Введите число страниц: ";
    std::cin >> pages;
}

void Paperbook::putdata() {
    Item::putdata();
    std::cout << "\nСтраниц: " << pages;
}
