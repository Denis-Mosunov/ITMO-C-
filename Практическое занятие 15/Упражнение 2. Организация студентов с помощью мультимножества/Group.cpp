#include "Group.h"
#include <iostream>

Group::~Group() {
    for(iter = masSt.begin(); iter != masSt.end(); ++iter) {
        delete *iter;
    }
}

int Group::getSize() {
    return masSt.size();
}

void Group::addStudent(Student* newStudent) {
    masSt.insert(newStudent);
}

void Group::delStudent(Student* oldStudent) {
    iter = masSt.find(oldStudent);
    if(iter != masSt.end()) {
        delete *iter;
        masSt.erase(iter);
    }
}

void Group::GroupOut() {
    iter = masSt.begin();
    while(iter != masSt.end()) {
        (*iter)->display();
        ++iter;
    }
}

Student* Group::findStudent(const std::string& searchName, const std::string& searchLastName) {
    Student temp(searchName, searchLastName);
    Student* pTemp = &temp;
    iter = masSt.lower_bound(pTemp);
    
    if(iter != masSt.end() && (*iter)->getLastName() == searchLastName && (*iter)->getName() == searchName) {
        return *iter;
    }
    return nullptr;
}
