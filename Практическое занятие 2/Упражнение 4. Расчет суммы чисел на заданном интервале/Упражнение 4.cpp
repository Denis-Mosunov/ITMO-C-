// Упражнение 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#include <iostream>
#include <cmath>
    using namespace std;
    // Задание 1: Суммирование чисел с использованием continue
        setlocale(LC_ALL, "rus");
        int k, m;
        cout << "Задание 1: Суммирование чисел с continue" << endl;
        cout << "Введите значения k и m: ";
        cin >> k >> m;
        int s = 0;
        for (int i = 1; i <= 100; i++) {
            if (i > k && i < m)
                continue;
            s += i;
        }
        cout << "Сумма: " << s << endl;
    }
