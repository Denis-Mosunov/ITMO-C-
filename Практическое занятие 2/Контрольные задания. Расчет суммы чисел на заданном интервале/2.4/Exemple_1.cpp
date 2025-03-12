#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


// Задание 1: Определение суперпростого числа
// Суперпростое число — простое число, порядковый номер которого (считая с 1)
// также является простым числом.
bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void superprimeExercise() {
    cout << "\nЗадание 2: Определение суперпростого числа" << endl;
    int n;
    cout << "Введите число для проверки суперпростоты: ";
    cin >> n;

    if (!isPrime(n)) {
        cout << n << " не является простым, следовательно, не может быть суперпростым." << endl;
        return;
    }

    int count = 0;
    int num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (num == n)
                break;
        }
        num++;
    }

    if (isPrime(count))
        cout << n << " является суперпростым числом." << endl;
    else
        cout << n << " не является суперпростым числом." << endl;
}

// Задание 2: Проверка номера СНИЛС
// Номер СНИЛС должен состоять из 11 цифр, первые 9 цифр не содержат более двух
// одинаковых подряд, а последние две — контрольное число.
bool validateSNILS(const string& snils) {
    if (snils.length() != 11)
        return false;
    // Проверка, что все символы — цифры
    for (char c : snils) {
        if (!isdigit(c))
            return false;
    }
    // Проверка: в первых 9 цифрах не должно быть более двух одинаковых подряд
    for (int i = 0; i < 7; i++) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2])
            return false;
    }
    int sum = 0;
    // Вычисляем сумму произведений цифр на их вес (от 9 до 1)
    for (int i = 0; i < 9; i++) {
        int digit = snils[i] - '0';
        int weight = 9 - i;
        sum += digit * weight;
    }
    int control;
    if (sum < 100) {
        control = sum;
    }
    else if (sum == 100 || sum == 101) {
        control = 0;
    }
    else {
        control = sum % 101;
        if (control == 100)
            control = 0;
    }
    int givenControl = stoi(snils.substr(9, 2));
    return (control == givenControl);
}

void snilsExercise() {
    cout << "\nЗадание 3: Проверка номера СНИЛС" << endl;
    string snils;
    cout << "Введите номер СНИЛС (11 цифр): ";
    cin >> snils;

    if (validateSNILS(snils))
        cout << "Номер СНИЛС валидный." << endl;
    else
        cout << "Номер СНИЛС невалидный." << endl;
}

// Задание 3: Размен монет
// Жадный алгоритм для размена с минимальным количеством монет.
// Используемые монеты: 100, 50, 10, 5, 2, 1.
void coinExchangeExercise() {
    cout << "\nЗадание 4: Размен монет" << endl;
    int amount;
    cout << "Введите сумму для размена: ";
    cin >> amount;

    int coins[] = { 100, 50, 10, 5, 2, 1 };
    int n = sizeof(coins) / sizeof(coins[0]);
    cout << "Набор монет: ";
    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            cout << coins[i] << " ";
        }
    }
    cout << endl;
}

// Задание 4: Стрельба по мишени
// Программа принимает координаты выстрелов, вычисляет очки в зависимости от
// расстояния от центра мишени и определяет уровень стрелка.
int getScore(double x, double y) {
    double r = sqrt(x * x + y * y);
    if (r <= 1.0)
        return 10;
    else if (r <= 2.0)
        return 5;
    else if (r <= 3.0)
        return 1;
    else
        return 0;
}

string getRating(int totalScore) {
    if (totalScore >= 50)
        return "Снайпер";
    else if (totalScore >= 20)
        return "Просто стрелок";
    else
        return "Новичок";
}

void shootingExercise() {
    cout << "\nЗадание 5: Стрельба по мишени" << endl;
    int n;
    cout << "Введите количество выстрелов: ";
    cin >> n;

    int totalScore = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cout << "Выстрел " << i + 1 << ". Введите координаты x и y: ";
        cin >> x >> y;
        int score = getScore(x, y);
        cout << "Набрано очков: " << score << endl;
        totalScore += score;
    }

    cout << "Общая сумма очков: " << totalScore << endl;
    cout << "Ваш уровень: " << getRating(totalScore) << endl;
}

// Функция ожидания нажатия Enter для перехода к следующему заданию
void waitForEnter() {
    cout << "\nНажмите Enter для продолжения...";
    cin.ignore(); // Игнорируем символ новой строки, оставшийся после ввода
    cin.get();
}

int main() {

    setlocale(LC_ALL, "Russian");

    waitForEnter();

    superprimeExercise();
    waitForEnter();

    snilsExercise();
    waitForEnter();

    coinExchangeExercise();
    waitForEnter();

    shootingExercise();

    cout << "\nПрограмма завершена." << endl;
    return 0;
}
