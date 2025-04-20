#ifndef GROUP_H
#define GROUP_H

#include <set>
#include <string>
#include "Student.h"

class Group {
private:
    std::multiset<Student*, compareStudent> masSt;
    std::multiset<Student*, compareStudent>::iterator iter;
    std::string name;

public:
    Group(const std::string& groupName) : name(groupName) {}
    ~Group();
    
    int getSize();
    void addStudent(Student* newStudent);
    void delStudent(Student* oldStudent);
    Student* findStudent(const std::string& searchName, const std::string& searchLastName);
    void GroupOut();
    std::string getName() const { return name; }
};

#endif
