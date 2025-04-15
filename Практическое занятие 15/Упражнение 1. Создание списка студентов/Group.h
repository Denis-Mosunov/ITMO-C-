#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <algorithm>
#include <string>
#include "Student.h"

class Group {
private:
    std::list<Student> masSt;
    std::list<Student>::iterator iter;
    std::string name;

public:
    Group(const std::string& groupName) : name(groupName) {}
    
    int getSize();
    void addStudent(const Student& newStudent);
    void delStudent(const Student& oldStudent);
    Student findStudent(const std::string& searchName, const std::string& searchLastName);
    void GroupSort();
    void GroupOut();
    std::string getName() const { return name; }
};

#endif
