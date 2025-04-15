#ifndef GRADE_BOOK_H
#define GRADE_BOOK_H

#include <map>
#include <string>

class GradeBook {
private:
    std::map<std::string, char> grades;
    
public:
    void addOrUpdateGrade(const std::string& name, char grade);
    char getGrade(const std::string& name) const;
    void displayAllGrades() const;
    bool isValidGrade(char grade) const;
};

#endif
