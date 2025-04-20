#include "audiobook.h"
#include <iostream>

void AudioBook::getdata() {
    Item::getdata();
    std::cout << "Введите время звучания: ";
    std::cin >> time;
}

void AudioBook::putdata() {
    Item::putdata();
    std::cout << "\nВремя звучания: " << time;
}
