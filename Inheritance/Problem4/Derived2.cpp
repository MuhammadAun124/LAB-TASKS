#include "Derived2.h"
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
void Derived2::display(ostream& out) const
{
    cout << "display()" << endl;
    displayDerived1(out);
    out << "Derived2 value: " << c << endl;
}
ostream& operator<<(ostream& out, const Derived2& obj)
{
    cout << "operator<<()" << endl;
    obj.display(out);
    return out;
}
Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}
