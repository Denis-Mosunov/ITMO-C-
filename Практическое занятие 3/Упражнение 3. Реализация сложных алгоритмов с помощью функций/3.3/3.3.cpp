#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

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

int main()
{
    double a;
    int n;

    cout << "Введите число a и степень n: ";
    cin >> a >> n;

    long double result = firBinSearch(a, n);

    cout << "Корень " << n << "-й степени из " << a << " равен: " << std::setprecision(10) << result << std::endl;

    return 0;
}
