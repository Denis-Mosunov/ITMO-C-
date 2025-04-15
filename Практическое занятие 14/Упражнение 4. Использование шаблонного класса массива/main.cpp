#include "template_array.h"
#include <iostream>

int main() {
    // Массив целых чисел с суммой long
    Array<int, long> numbers(100);
    
    // Массив float с суммой float
    Array<float, float> values(200);
    
    // Заполнение первого массива
    for (int i = 0; i < 50; i++) {
        numbers.add_value(i);
    }
    
    std::cout << "Integer array (0-49): ";
    numbers.show_array();
    std::cout << "Sum = " << numbers.sum() << std::endl;
    std::cout << "Average = " << numbers.average_value() << std::endl;
    
    // Заполнение второго массива
    for (int i = 0; i < 100; i++) {
        values.add_value(i * 100);
    }
    
    std::cout << "\nFloat array (0-9900 with step 100): ";
    values.show_array();
    std::cout << "Sum = " << values.sum() << std::endl;
    std::cout << "Average = " << values.average_value() << std::endl;
    
    return 0;
}
