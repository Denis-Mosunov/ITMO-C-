#include "tuple_utils.h"
#include <string>
#include <vector>

int main() {
    // Примеры кортежей разных типов
    auto t1 = std::make_tuple("Hello", 42, 3.14);
    auto t2 = std::make_tuple(1, 'A', true);
    auto t3 = std::make_tuple(5.67, std::string("World"), 100);
    
    // Вывод кортежей
    std::cout << "Tuple 1: ";
    printTupleOfThree(t1);
    
    std::cout << "Tuple 2: ";
    printTupleOfThree(t2);
    
    std::cout << "Tuple 3: ";
    printTupleOfThree(t3);
    
    // Можно создать кортеж из элементов вектора
    std::vector<int> v1 = {10, 20, 30};
    std::vector<double> v2 = {1.1, 2.2, 3.3};
    
    auto t4 = std::make_tuple(v1[0], v1[1], v2[2]);
    std::cout << "Tuple 4: ";
    printTupleOfThree(t4);
    
    return 0;
}
