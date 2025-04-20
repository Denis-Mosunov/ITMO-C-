#ifndef PAPERBOOK_H
#define PAPERBOOK_H

#include "item.h"

class Paperbook : public Item {
private:
    int pages;
public:
    void getdata() override;
    void putdata() override;
};

#endif // PAPERBOOK_H
