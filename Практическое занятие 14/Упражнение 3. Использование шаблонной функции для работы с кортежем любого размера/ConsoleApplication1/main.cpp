#include "tuple_printer.h"
#include <vector>
#include <string>

int main() {
    std::vector<std::string> v1{"one", "two", "three", "four", "five", "six"};
    std::vector<int> v2 = {1, 2, 3, 4, 5, 6};
    std::vector<float> v3 = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f};

    // Кортежи разного размера и с разными типами
    auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
    auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v3[1]);
    auto t3 = std::make_tuple(42, "hello", 3.14, 'a', true, v2[2]);

    // Печать кортежей
    std::cout << "Tuple 1: ";
    printTuple(t1);

    std::cout << "Tuple 2: ";
    printTuple(t2);

    std::cout << "Tuple 3: ";
    printTuple(t3);

    return 0;
}
