
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 10;
    int mas[n];

    // Ввод массива
    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "]: ";
        cin >> mas[i];
    }

    // Вычисление суммы всех элементов
    int s = 0;
    for (int i = 0; i < n; i++) {
        s+= mas[i];
    }
    cout << "Сумма всех элементов: " << s << endl;

    // Среднее значение
    double avg = static_cast<double>(s) / n;
    cout << "Среднее значение: " << avg << endl;

    // Суммы отрицательных и положительных элементов
    int sumNeg = 0, sumPos = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] < 0) sumNeg += mas[i];
        else sumPos += mas[i];
    }
    cout << "Сумма отрицательных элементов: " << sumNeg << endl;
    cout << "Сумма положительных элементов: " << sumPos << endl;

    // Суммы элементов с четными и нечетными индексами
    int sumEvenIdx = 0, sumOddIdx = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sumEvenIdx += mas[i];
        else sumOddIdx += mas[i];
    }
    cout << "Сумма элементов на четных индексах: " << sumEvenIdx << endl;
    cout << "Сумма элементов на нечетных индексах: " << sumOddIdx << endl;

    // Нахождение минимального и максимального элементов
    int minVal = mas[0], maxVal = mas[0];
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (mas[i] < minVal) {
            minVal = mas[i];
            minIdx = i;
        }
        if (mas[i] > maxVal) {
            maxVal = mas[i];
            maxIdx = i;
        }
    }
    cout << "Минимальный элемент: " << minVal << " (индекс " << minIdx << ")" << endl;
    cout << "Максимальный элемент: " << maxVal << " (индекс " << maxIdx << ")" << endl;

    // Вычисление произведения элементов между min и max
    if (minIdx > maxIdx) swap(minIdx, maxIdx);
    int product = 1;
    for (int i = minIdx + 1; i < maxIdx; i++) {
        product *= mas[i];
    }
    cout << "Произведение элементов между min и max: " << product << endl;

    return 0;
}
