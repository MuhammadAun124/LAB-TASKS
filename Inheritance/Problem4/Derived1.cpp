#include "Derived1.h"
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
        Base::operator=(obj);
        b = obj.b;
    }
    return *this;
}
void Derived1::displayDerived1(ostream& out) const
{
    cout << "displayDerived1()" << endl;
    displayBase(out);
    out << "Derived1 value: " << b << endl;
}
Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}
