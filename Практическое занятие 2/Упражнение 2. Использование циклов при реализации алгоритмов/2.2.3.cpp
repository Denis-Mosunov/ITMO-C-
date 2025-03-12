#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, x1, x2, y;

    cout << "x1 = ";
    cin >> x1;
    cout << "x2 = ";
    cin >> x2;

    cout << "\tx\tsin(x)\n";

    x = x1;
    while (x <= x2) {   // условие проверяется до входа в цикл
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }

    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // Выполнение цикла хотя бы один раз гарантируется
    do {
        if (a > b)
            a -= b;
        else if (b > a)
            b -= a;
        // Если a == b, ни одно из условий не срабатывает, и цикл завершится
    } while (a != b);

    cout << "НОД = " << a << endl;
    return 0;
}
