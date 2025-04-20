#include <iostream>

using namespace std;

// Шаблонная функция сортировки вставками
template<class T>
void sorting(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        T x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}

// Шаблонная функция для вывода массива
template<class T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ";";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 3, 17, 6, 5, 4, 31, 2, 12};
    double arrd[] = {2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2};
    char arrc[] = "Hello, word";
    
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1; // -1 чтобы не учитывать нуль-терминатор
    
    // Сортировка и вывод целочисленного массива
    sorting(arr, k1);
    cout << "Sorted int array: ";
    printArray(arr, k1);
    
    // Сортировка и вывод массива double
    sorting(arrd, k2);
    cout << "Sorted double array: ";
    printArray(arrd, k2);
    
    // Сортировка и вывод символьного массива
    sorting(arrc, k3);
    cout << "Sorted char array: ";
    printArray(arrc, k3);
    
    return 0;
}
