#ifndef DERIVED1_H
#define DERIVED1_H
#include "Base.h"
class Derived1 : public Base
{
protected:
    int b;
public:
    Derived1(int x, int y);
    ~Derived1();
};
#endif
