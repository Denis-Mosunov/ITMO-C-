#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    ofstream outFile; // Объект для записи в файл
    string poemLine;
    string filename;

    // Запрос имени файла
    cout << "Введите имя файла для сохранения стихотворения: ";
    getline(cin, filename);

    // Открытие файла
    outFile.open(filename);

    if (!outFile.is_open()) {
        cerr << "Ошибка: не удалось открыть файл!" << endl;
        return 1;
    }

    cout << "Введите стихотворение (для завершения введите пустую строку):\n";

    // Чтение ввода построчно
    while (true) {
        getline(cin, poemLine);
        if (poemLine.empty()) {
            break;
        }
        outFile << poemLine << endl; // Запись строки в файл
    }

    outFile.close(); // Закрытие файла
    cout << "Стихотворение успешно сохранено в файл \"" << filename << "\"" << endl;

    return 0;
}