#include "audiobook.h"
#include <iostream>

void AudioBook::getdata() {
    std::cout << "Введите название аудиокниги: ";
    std::cin >> title;
    std::cout << "Введите цену: ";
    std::cin >> price;
    std::cout << "Введите длительность (мин): ";
    std::cin >> duration;
}

void AudioBook::putdata() const {
    std::cout << "Аудиокнига: " << title
              << "\nЦена: " << price
              << "\nДлительность: " << duration << " мин" << std::endl;
}

void AudioBook::showSpecial() const {
    std::cout << "Особенность аудиокниги: " << duration << " минут погружения!" << std::endl;
}
