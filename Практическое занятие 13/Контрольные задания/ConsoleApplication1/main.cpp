#include <iostream>
#include <vector>
#include <memory>
#include "item.h"
#include "paperbook.h"
#include "audiobook.h"

void demonstratePolymorphism(const Item& item) {
    item.putdata();
    item.showSpecial();
    std::cout << "-------------------\n";
}

int main() {
    setlocale(LC_ALL, "Russia");
    std::vector<std::unique_ptr<Item>> items;
    
    // Создаем объекты разных типов
    items.emplace_back(std::make_unique<Paperbook>());
    items.emplace_back(std::make_unique<AudioBook>());
    
    // Ввод данных
    for (auto& item : items) {
        item->getdata();
    }
    
    // Демонстрация полиморфизма
    std::cout << "\nПолиморфный вывод:\n";
    for (const auto& item : items) {
        demonstratePolymorphism(*item);
    }
    
    // Альтернативный вариант вызова
    std::cout << "\nПрямой полиморфный вызов:\n";
    for (const auto& item : items) {
        item->putdata();
        item->showSpecial();
        std::cout << "-------------------\n";
    }
    
    return 0;
}
