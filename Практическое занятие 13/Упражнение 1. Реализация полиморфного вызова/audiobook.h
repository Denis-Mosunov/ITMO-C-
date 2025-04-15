#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "item.h"

class AudioBook : public Item {
private:
    double time;
public:
    void getdata() override;
    void putdata() override;
};

#endif // AUDIOBOOK_H
