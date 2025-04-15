#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "IdCard.h"

class Student {
private:
    std::string name;
    std::string last_name;
    IdCard* idCard;

public:
    Student(const std::string& n, const std::string& ln, IdCard* id = nullptr)
        : name(n), last_name(ln), idCard(id) {}
    
    void display() const {
        std::cout << last_name << " " << name;
        if(idCard) std::cout << ", ID: " << idCard->getNumber();
        std::cout << std::endl;
    }

    friend bool operator< (const Student&, const Student&);
    friend bool operator> (const Student&, const Student&);
    friend bool operator== (const Student&, const Student&);
    friend bool operator!= (const Student&, const Student&);
};

#endif
