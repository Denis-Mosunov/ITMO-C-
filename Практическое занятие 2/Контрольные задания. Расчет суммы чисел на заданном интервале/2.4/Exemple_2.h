#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ����� ��� �������� �������������: ";
    cin >> n;

    if (!isPrime(n)) {
        cout << n << " �� �������� �������, ������������� �� ����� ���� ������������." << endl;
        return 0;
    }

    int count = 0, num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (num == n)
                break;
        }
        num++;
    }

    if (isPrime(count))
        cout << n << " �������� ������������ ������." << endl;
    else
        cout << n << " �� �������� ������������ ������." << endl;

    return 0;
}
