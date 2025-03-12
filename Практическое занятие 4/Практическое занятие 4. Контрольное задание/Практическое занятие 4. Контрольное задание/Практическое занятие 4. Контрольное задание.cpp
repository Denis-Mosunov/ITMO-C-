#include <iostream>
#include <cmath>

// Прототип функции для вычисления корней квадратного уравнения
int Myroot(double, double, double, double&, double&);

// Функция ввода с проверкой корректности
bool Input(int&, int&);

int main() {

    setlocale (LC_ALL, "Russian");
    double a, b, c, x1, x2;
    std::cout << "Введите коэффициенты a, b, c: ";
    std::cin >> a >> b >> c;

    int result = Myroot(a, b, c, x1, x2);

    if (result == 1) {
        std::cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (result == 0) {
        std::cout << "Корень уравнения один: x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "Корней уравнения нет" << std::endl;
    }

    int a_input, b_input;
    if (!Input(a_input, b_input)) {
        std::cerr << "error";
        return 1;
    }

    int s = a_input + b_input;
    std::cout << "Сумма введенных чисел: " << s << std::endl;

    return 0;
}

// Функция вычисления корней квадратного уравнения
int Myroot(double a, double b, double c, double& x1, double& x2) {
    double D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0) {
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else {
        return -1;
    }
}

// Функция ввода с проверкой корректности
bool Input(int& a, int& b) {
    std::cout << "Введите два целых числа: ";
    if (!(std::cin >> a >> b)) {
        return false;
    }
    return true;
}
