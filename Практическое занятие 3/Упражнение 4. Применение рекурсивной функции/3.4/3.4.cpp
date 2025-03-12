#include <iostream>
#include <cmath>
#include <iomanip>

// Функция бинарного поиска для нахождения корня степени n
long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

// Функция вычисления суммы чисел от 1 до n
int addNumbers(int n)
{
    if (n == 1) return 1;
    return n + addNumbers(n - 1);
}

// Перегруженная функция суммы чисел на интервале [m, n]
int addNumbers(int m, int n)
{
    if (m > n) return 0;
    if (m == n) return m;
    return n + addNumbers(m, n - 1);
}

// Функция вычисления НОД по алгоритму Евклида
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double a;
    int n;

    std::cout << "Введите число a и степень n: ";
    std::cin >> a >> n;

    long double result = firBinSearch(a, n);

    std::cout << "Корень " << n << "-й степени из " << a << " равен: " << std::setprecision(10) << result << std::endl;

    // Ввод для вычисления суммы чисел
    int num;
    std::cout << "Введите число для суммы от 1 до n: ";
    std::cin >> num;
    std::cout << "Сумма чисел от 1 до " << num << " равна: " << addNumbers(num) << std::endl;

    // Ввод для интервала суммы
    int start, end;
    std::cout << "Введите два числа (интервал) для суммы: ";
    std::cin >> start >> end;
    std::cout << "Сумма чисел от " << start << " до " << end << " равна: " << addNumbers(start, end) << std::endl;

    // Ввод для НОД
    int m, n_gcd;
    std::cout << "Введите два числа для вычисления НОД: ";
    std::cin >> m >> n_gcd;
    std::cout << "НОД " << m << " и " << n_gcd << " равен: " << gcd(m, n_gcd) << std::endl;

    return 0;
}
