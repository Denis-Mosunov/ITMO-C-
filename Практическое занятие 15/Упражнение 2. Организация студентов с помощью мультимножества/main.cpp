#include <iostream>
#include "Group.h"
#include "Student.h"
#include "IdCard.h"

int main() {
    IdCard* idc = new IdCard(123);
    IdCard* idc2 = new IdCard(456);

    Student* student02 = new Student("Иван", "Иванов", idc);
    Student* student03 = new Student("Петр", "Петров", idc2);
    Student* student04 = new Student("Семен", "Смирнов", idc);
    Student* student05 = new Student("Саша", "Коен", idc2);
    Student* student06 = new Student("Дмитрий", "Ионов", idc);

    Group gr1957("1957");

    gr1957.addStudent(student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

    int k = gr1957.getSize();

    std::cout << "В группе " << gr1957.getName() << " " << k << " ст." << std::endl;
    gr1957.GroupOut();

    // Тестирование удаления
    gr1957.delStudent(student04);
    std::cout << "\nПосле удаления Смирнова:\n";
    gr1957.GroupOut();

    // Тестирование поиска и удаления
    Student* found = gr1957.findStudent("Петр", "Петров");
    if(found) {
        gr1957.delStudent(found);
        std::cout << "\nПосле удаления Петрова:\n";
        gr1957.GroupOut();
    }

    delete idc;
    delete idc2;

    return 0;
}
