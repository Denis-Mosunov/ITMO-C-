#ifndef TEMPLATE_ARRAY_H
#define TEMPLATE_ARRAY_H

#include <iostream>
#include <cstdlib>

template<class T, class T1>
class Array {
public:
    Array(int size);
    ~Array();
    
    T1 sum();
    T average_value();
    void show_array();
    int add_value(T value);
    
private:
    T* data;
    int size;
    int index;
};

// Реализация методов класса

template<class T, class T1>
Array<T, T1>::Array(int size) {
    data = new T[size];
    if (data == nullptr) {
        std::cerr << "Error memory allocation -- exit program" << std::endl;
        exit(1);
    }
    this->size = size;
    index = 0;
}

template<class T, class T1>
Array<T, T1>::~Array() {
    delete[] data;
}

template<class T, class T1>
T1 Array<T, T1>::sum() {
    T1 sum = 0;
    for (int i = 0; i < index; i++) {
        sum += data[i];
    }
    return sum;
}

template<class T, class T1>
T Array<T, T1>::average_value() {
    if (index == 0) return 0; // защита от деления на ноль
    return static_cast<T>(sum() / index);
}

template<class T, class T1>
void Array<T, T1>::show_array() {
    for (int i = 0; i < index; i++) {
        std::cout << data[i] << ' ';
    }
    std::cout << std::endl;
}

template<class T, class T1>
int Array<T, T1>::add_value(T value) {
    if (index == size) {
        return -1;
    }
    data[index] = value;
    index++;
    return 0;
}

#endif // TEMPLATE_ARRAY_H
