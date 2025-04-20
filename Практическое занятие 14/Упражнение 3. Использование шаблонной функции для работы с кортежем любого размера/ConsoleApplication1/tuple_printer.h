#ifndef TUPLE_PRINTER_H
#define TUPLE_PRINTER_H

#include <iostream>
#include <tuple>

// Рекурсивный шаблонный класс для печати кортежа
template<class Tuple, std::size_t N>
struct TuplePrinter {
    static void print(const Tuple& t) {
        TuplePrinter<Tuple, N-1>::print(t);
        std::cout << ", " << std::get<N-1>(t);
    }
};

// Частичная специализация для завершения рекурсии
template<class Tuple>
struct TuplePrinter<Tuple, 1> {
    static void print(const Tuple& t) {
        std::cout << std::get<0>(t);
    }
};

// Функция для печати кортежа любого размера
template<class... Args>
void printTuple(const std::tuple<Args...>& t) {
    std::cout << "(";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    std::cout << ")" << std::endl;
}

#endif // TUPLE_PRINTER_H
