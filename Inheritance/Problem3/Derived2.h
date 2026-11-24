#ifndef DERIVED2_H
#define DERIVED2_H
#include "Derived1.h"
class Derived2 : public Derived1
{
private:
    int c;
public:
    Derived2(int x, int y, int z);
    Derived2(const Derived2& obj);
    Derived2& operator=(const Derived2& obj);
    void setValue(int value);
    void print();
    ~Derived2();
};
#endif
