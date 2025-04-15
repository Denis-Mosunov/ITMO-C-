#ifndef TUPLE_UTILS_H
#define TUPLE_UTILS_H

#include <iostream>
#include <tuple>

// Шаблонная функция для вывода кортежа из трех элементов любого типа
template<class Tuple>
void printTupleOfThree(const Tuple& t) {
    std::cout << "(" << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << ")" << std::endl;
}

#endif // TUPLE_UTILS_H
