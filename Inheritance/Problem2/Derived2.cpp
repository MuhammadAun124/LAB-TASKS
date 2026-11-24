#include <iostream>
#include "Derived2.h"
using namespace std;
Derived2::Derived2(int x, int y, int z) : Derived1(x, y)
{
    c = z;
    cout << "Derived2 Constructor" << endl;
}
Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}
void Derived2::print()
{
    cout << "Base value: " << a << endl;
    cout << "Derived1 value: " << b << endl;
    cout << "Derived2 value: " << c << endl;
    cout << "Derived2::print()" << endl;
}
