#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


// ������� 1: ����������� ������������� �����
// ������������ ����� � ������� �����, ���������� ����� �������� (������ � 1)
// ����� �������� ������� ������.
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
    cout << "\n������� 2: ����������� ������������� �����" << endl;
    int n;
    cout << "������� ����� ��� �������� �������������: ";
    cin >> n;

    if (!isPrime(n)) {
        cout << n << " �� �������� �������, �������������, �� ����� ���� ������������." << endl;
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
        cout << n << " �������� ������������ ������." << endl;
    else
        cout << n << " �� �������� ������������ ������." << endl;
}

// ������� 2: �������� ������ �����
// ����� ����� ������ �������� �� 11 ����, ������ 9 ���� �� �������� ����� ����
// ���������� ������, � ��������� ��� � ����������� �����.
bool validateSNILS(const string& snils) {
    if (snils.length() != 11)
        return false;
    // ��������, ��� ��� ������� � �����
    for (char c : snils) {
        if (!isdigit(c))
            return false;
    }
    // ��������: � ������ 9 ������ �� ������ ���� ����� ���� ���������� ������
    for (int i = 0; i < 7; i++) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2])
            return false;
    }
    int sum = 0;
    // ��������� ����� ������������ ���� �� �� ��� (�� 9 �� 1)
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
    cout << "\n������� 3: �������� ������ �����" << endl;
    string snils;
    cout << "������� ����� ����� (11 ����): ";
    cin >> snils;

    if (validateSNILS(snils))
        cout << "����� ����� ��������." << endl;
    else
        cout << "����� ����� ����������." << endl;
}

// ������� 3: ������ �����
// ������ �������� ��� ������� � ����������� ����������� �����.
// ������������ ������: 100, 50, 10, 5, 2, 1.
void coinExchangeExercise() {
    cout << "\n������� 4: ������ �����" << endl;
    int amount;
    cout << "������� ����� ��� �������: ";
    cin >> amount;

    int coins[] = { 100, 50, 10, 5, 2, 1 };
    int n = sizeof(coins) / sizeof(coins[0]);
    cout << "����� �����: ";
    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            cout << coins[i] << " ";
        }
    }
    cout << endl;
}

// ������� 4: �������� �� ������
// ��������� ��������� ���������� ���������, ��������� ���� � ����������� ��
// ���������� �� ������ ������ � ���������� ������� �������.
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
        return "�������";
    else if (totalScore >= 20)
        return "������ �������";
    else
        return "�������";
}

void shootingExercise() {
    cout << "\n������� 5: �������� �� ������" << endl;
    int n;
    cout << "������� ���������� ���������: ";
    cin >> n;

    int totalScore = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cout << "������� " << i + 1 << ". ������� ���������� x � y: ";
        cin >> x >> y;
        int score = getScore(x, y);
        cout << "������� �����: " << score << endl;
        totalScore += score;
    }

    cout << "����� ����� �����: " << totalScore << endl;
    cout << "��� �������: " << getRating(totalScore) << endl;
}

// ������� �������� ������� Enter ��� �������� � ���������� �������
void waitForEnter() {
    cout << "\n������� Enter ��� �����������...";
    cin.ignore(); // ���������� ������ ����� ������, ���������� ����� �����
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

    cout << "\n��������� ���������." << endl;
    return 0;
}
