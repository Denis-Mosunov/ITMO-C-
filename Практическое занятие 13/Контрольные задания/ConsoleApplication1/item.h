#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
protected:
    std::string title;
    double price;
public:
    virtual void getdata() = 0;  // Чисто виртуальная функция
    virtual void putdata() const = 0;
    virtual ~Item() = default;
    
    // Новый полиморфный метод для демонстрации
    virtual void showSpecial() const {
        std::cout << "Базовый элемент: " << title << std::endl;
    }
};

#endif
