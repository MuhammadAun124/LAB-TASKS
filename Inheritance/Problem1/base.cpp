#include "Base.h"
#include <iostream>
using namespace std;
Base::Base() : val1{0}
{
    cout << "Base()" << endl;
}
Base::~Base()
{
    cout << "~Base()" << endl;
}
Derived1::Derived1() : Base(), val2{0}
{
    cout << "Derived1()" << endl;
}
Derived1::~Derived1()
{
    cout << "~Derived1()" << endl;
}
Derived2::Derived2() : Derived1(), val3{0}
{
    cout << "Derived2()" << endl;
}
Derived2::~Derived2()
{
    cout << "~Derived2()" << endl;
}
