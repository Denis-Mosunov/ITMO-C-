﻿#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;

    // Функция для вычисления общего количества секунд
    int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    // Функция для сложения интервалов времени
    Time add(const Time& other) const {
        Time result;
        int totalSeconds = toSeconds() + other.toSeconds();

        result.hours = totalSeconds / 3600;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;

        return result;
    }

    // Функция для вычитания интервалов времени
    Time subtract(const Time& other) const {
        Time result;
        int totalSeconds = toSeconds() - other.toSeconds();

        if (totalSeconds < 0) {
            cout << "Ошибка: отрицательный интервал времени!" << endl;
            return { 0, 0, 0 };
        }

        result.hours = totalSeconds / 3600;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;

        return result;
    }

    // Функция для вывода времени
    void print() const {
        cout << hours << " часов, " << minutes << " минут, " << seconds << " секунд";
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Time t1, t2;

    cout << "Введите первое время (часы минуты секунды): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;

    cout << "Введите второе время (часы минуты секунды): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;

    // Проверка корректности ввода
    if (t1.minutes >= 60 || t1.seconds >= 60 || t2.minutes >= 60 || t2.seconds >= 60) {
        cout << "Ошибка: некорректное значение минут или секунд!" << endl;
        return 1;
    }

    cout << "Первое время в секундах: " << t1.toSeconds() << endl;
    cout << "Второе время в секундах: " << t2.toSeconds() << endl;

    Time sum = t1.add(t2);
    cout << "Сумма: ";
    sum.print();
    cout << endl;

    Time diff = t1.subtract(t2);
    cout << "Разность: ";
    diff.print();
    cout << endl;

    return 0;
}
