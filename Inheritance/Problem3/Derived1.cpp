#include <iostream>
#include "Derived1.h"
using namespace std;
Derived1::Derived1(int x, int y) : Base(x)
{
    b = y;
    cout << "Derived1 Constructor" << endl;
}
Derived1::Derived1(const Derived1& obj) : Base(obj)
{
    b = obj.b;
    cout << "Derived1 Copy Constructor" << endl;
}
Derived1& Derived1::operator=(const Derived1& obj)
{
    cout << "Derived1 Assignment Operator" << endl;
    if (this != &obj)
    {
        a = obj.a;
        b = obj.b;
    }
    return *this;
}
Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}
