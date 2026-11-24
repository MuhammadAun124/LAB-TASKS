#include <iostream>
#include "Derived2.h"
using namespace std;
Derived2::Derived2(int x, int y, int z) : Derived1(x, y)
{
    c = z;
    cout << "Derived2 Constructor" << endl;
}
Derived2::Derived2(const Derived2& obj) : Derived1(obj)
{
    c = obj.c;
    cout << "Derived2 Copy Constructor" << endl;
}
Derived2& Derived2::operator=(const Derived2& obj)
{
    cout << "Derived2 Assignment Operator" << endl;
    if (this != &obj)
    {
        Derived1::operator=(obj);
        c = obj.c;
    }
    return *this;
}
void Derived2::setValue(int value)
{
    cout << "setValue()" << endl;
    c = value;
}
void Derived2::print()
{
    cout << "Derived2::print()" << endl;
    cout << "Base value: " << a << endl;
    cout << "Derived1 value: " << b << endl;
    cout << "Derived2 value: " << c << endl;
}
Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}
