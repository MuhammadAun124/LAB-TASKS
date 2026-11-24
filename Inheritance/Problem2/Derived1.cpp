#include <iostream>
#include "Derived1.h"
using namespace std;
Derived1::Derived1(int x, int y) : Base(x)
{
    b = y;
    cout << "Derived1 Constructor" << endl;
}
Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}
