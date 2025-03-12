#include <iostream>

// Объявление функций (прототипы)
void swap(int*, int*);
void swap(int&, int&);

int main() {
    int x = 5, y = 10;

    std::cout << "Before swap (pointers): x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swap (pointers): x = " << x << ", y = " << y << std::endl;

    swap(x, y);
    std::cout << "After swap (references): x = " << x << ", y = " << y << std::endl;

    return 0;
}

// Определение функций
void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}