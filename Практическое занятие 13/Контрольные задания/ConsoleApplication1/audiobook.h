#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "item.h"

class AudioBook : public Item {
private:
    double duration;  // minutes
public:
    void getdata() override;
    void putdata() const override;
    void showSpecial() const override;
};

#endif
