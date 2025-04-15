#include "grade_book.h"
#include "menu.h"

int main() {
    GradeBook gradeBook;
    Menu menu(gradeBook);
    menu.run();
    return 0;
}
