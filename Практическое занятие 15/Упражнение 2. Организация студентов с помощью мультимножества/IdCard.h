#ifndef IDCARD_H
#define IDCARD_H

class IdCard {
private:
    int number;

public:
    IdCard(int n) : number(n) {}
    int getNumber() const { return number; }
};

#endif
