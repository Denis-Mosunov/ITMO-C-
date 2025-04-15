#include "grade_book.h"
#include <iostream>
#include <cctype>

void GradeBook::addOrUpdateGrade(const std::string& name, char grade) {
    char upperGrade = toupper(grade);
    if (!isValidGrade(upperGrade)) {
        throw std::invalid_argument("Invalid grade value");
    }
    grades[name] = upperGrade;
}

char GradeBook::getGrade(const std::string& name) const {
    auto it = grades.find(name);
    if (it == grades.end()) {
        throw std::out_of_range("Student not found");
    }
    return it->second;
}

void GradeBook::displayAllGrades() const {
    if (grades.empty()) {
        std::cout << "No grades recorded yet.\n";
        return;
    }
    
    for (const auto& [name, grade] : grades) {
        std::cout << name << ": " << grade << "\n";
    }
}

bool GradeBook::isValidGrade(char grade) const {
    grade = toupper(grade);
    return (grade >= 'A' && grade <= 'D') || grade == 'F';
}
