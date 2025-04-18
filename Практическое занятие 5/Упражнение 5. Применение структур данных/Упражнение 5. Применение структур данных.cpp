﻿#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int a, b, c;
    int k = 0;
    const int n = 10;
    int mas[n];
    vector<int> v1; // правильные ответы
    vector<int> v2; // неправильные ответы

    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;

        if (a * b != c) {
            v2.push_back(c);
            k++;
        }
        else {
            v1.push_back(c);
        }
    }

    cout << "\nВсе ответы: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }

    cout << "\nПравильные: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << "\nНеправильные: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << "\nВсего ошибок: " << k << endl;

    return 0;
}
