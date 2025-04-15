#ifndef MENU_H
#define MENU_H

#include "grade_book.h"

class Menu {
private:
    GradeBook& gradeBook;
    
    void showAddGrade();
    void showGetGrade();
    
public:
    Menu(GradeBook& gb) : gradeBook(gb) {}
    void run();
};

#endif
