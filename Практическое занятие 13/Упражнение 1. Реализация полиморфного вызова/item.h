#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
protected:
    std::string title;
    double price;
public:
    virtual void getdata();
    virtual void putdata();
    virtual ~Item() = default; // Виртуальный деструктор
};

#endif // ITEM_H
