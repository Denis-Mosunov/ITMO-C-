#include <iostream>
#include "Group.h"
#include "Student.h"
#include "IdCard.h"

int main() {
    IdCard idc(123);
    IdCard idc2(456);

    Student student02("Иван", "Иванов", &idc);
    Student student03("Петр", "Петров", &idc2);
    Student student04("Семен", "Смирнов", &idc);
    Student student05("Саша", "Коен", &idc2);
    Student student06("Дмитрий", "Ионов", &idc);

    Group gr1957("1957");

    gr1957.addStudent(student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

    int k = gr1957.getSize();
    gr1957.GroupSort();

    std::cout << "В группе " << gr1957.getName() << " " << k << " ст." << std::endl;
    gr1957.GroupOut();

    // Тестирование удаления
    gr1957.delStudent(student04);
    std::cout << "\nПосле удаления Смирнова:\n";
    gr1957.GroupOut();

    // Тестирование поиска и удаления
    try {
        gr1957.delStudent(gr1957.findStudent("Петр", "Петров"));
        std::cout << "\nПосле удаления Петрова:\n";
        gr1957.GroupOut();
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
