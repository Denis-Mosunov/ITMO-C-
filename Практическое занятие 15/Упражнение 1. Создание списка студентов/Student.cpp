#include "Student.h"

bool operator== (const Student& p1, const Student& p2) {
    return (p1.name == p2.name && p1.last_name == p2.last_name);
}

bool operator< (const Student& p1, const Student& p2) {
    if(p1.last_name == p2.last_name)
        return (p1.name < p2.name);
    return (p1.last_name < p2.last_name);
}

bool operator!= (const Student& p1, const Student& p2) {
    return !(p1 == p2);
}

bool operator> (const Student& p1, const Student& p2) {
    return !(p1 < p2) && !(p1 == p2);
}
