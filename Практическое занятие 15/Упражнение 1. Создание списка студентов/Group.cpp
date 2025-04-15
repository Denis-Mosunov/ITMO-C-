#include "Group.h"
#include <iostream>

int Group::getSize() {
    return masSt.size();
}

void Group::addStudent(const Student& newStudent) {
    masSt.push_back(newStudent);
}

void Group::delStudent(const Student& oldStudent) {
    masSt.remove(oldStudent);
}

void Group::GroupOut() {
    iter = masSt.begin();
    while(iter != masSt.end()) {
        (*iter).display();
        ++iter;
    }
}

Student Group::findStudent(const std::string& searchName, const std::string& searchLastName) {
    Student temp(searchName, searchLastName);
    iter = std::find(masSt.begin(), masSt.end(), temp);
    if(iter != masSt.end()) {
        return *iter;
    }
    throw std::runtime_error("Student not found");
}

void Group::GroupSort() {
    masSt.sort();
}
