#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"


int main() {
    // Тестирование класса student
    setlocale(LC_ALL, "rus");
    std::vector<int> scores = {5, 3, 4, 4, 5, 3, 3, 3, 3};
    student *stud = new student("Петров", "Иван", "Алексеевич", scores);
    std::cout << stud->get_full_name() << std::endl;
    std::cout << "Средний балл: " << stud->get_average_score() << std::endl;

    // Тестирование класса teacher
    unsigned int teacher_work_time = 40;
    teacher *tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    std::cout << tch->get_full_name() << std::endl;
    std::cout << "Количество часов: " << tch->get_work_time() << std::endl;

    delete stud;
    delete tch;
    return 0;
}
