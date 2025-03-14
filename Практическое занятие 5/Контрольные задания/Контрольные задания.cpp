#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// Функция для задания 2: возврат массива из функции
int* max_vect(int size, int* a, int* b) {
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = (a[i] > b[i]) ? a[i] : b[i];
    }
    return result;
}

// Функция для задания 3: поиск методом транспозиции
int search_transposition(int* arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (i > 0) {
                swap(arr[i], arr[i - 1]); // Транспозиция найденного элемента
            }
            return i; // Возвращаем индекс
        }
    }
    return -1; // Элемент не найден
}

// Функция для задания 4: обработка аргументов командной строки
int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");
    if (argc == 1) {
        // Проверяем выполнение задания 2
        int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
        int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };
        int kc = sizeof(a) / sizeof(a[0]);
        int* c = max_vect(kc, a, b);

        for (int i = 0; i < kc; i++) {
            cout << c[i] << " ";
        }
        cout << endl;
        delete[] c;

        // Проверяем выполнение задания 3
        int arr[] = { 5, 3, 8, 6, 2, 7, 4 };
        int key = 6;
        int pos = search_transposition(arr, 7, key);
        if (pos != -1) {
            cout << "Элемент найден на позиции: " << pos << endl;
        }
        else {
            cout << "Элемент не найден" << endl;
        }
        return 0;
    }

    // Обработка параметров командной строки (Задание 4)
    if (argc != 4) {
        cerr << "Ошибка: неверное количество аргументов" << endl;
        return 1;
    }

    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cerr << "Ошибка: неверный флаг. Используйте -a для сложения или -m для умножения" << endl;
        return 1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    if (argv[1][1] == 'a') {
        cout << "Сумма: " << num1 + num2 << endl;
    }
    else {
        cout << "Произведение: " << num1 * num2 << endl;
    }
    return 0;
}
