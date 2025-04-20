#include <iostream>

template <typename T>
double calculateAverage(const T* array, int size) {
    if (size <= 0) {
        return 0.0; // Чтобы избежать деления на ноль
    }
    
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += static_cast<double>(array[i]);
    }
    
    return sum / size;
}

int main() {
    // Тестирование с массивом int
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Average of intArray: " << calculateAverage(intArray, 5) << std::endl;
    
    // Тестирование с массивом long
    long longArray[] = {10L, 20L, 30L, 40L, 50L};
    std::cout << "Average of longArray: " << calculateAverage(longArray, 5) << std::endl;
    
    // Тестирование с массивом double
    double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    std::cout << "Average of doubleArray: " << calculateAverage(doubleArray, 5) << std::endl;
    
    // Тестирование с массивом char (значения ASCII)
    char charArray[] = {10, 20, 30, 40, 50}; // ASCII-коды
    std::cout << "Average of charArray: " << calculateAverage(charArray, 5) << std::endl;
    
    return 0;
}
