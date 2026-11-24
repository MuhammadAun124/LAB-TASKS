#include "Base.h"
Base::Base(int x)
{
    a = x;
    cout << "Base Constructor" << endl;
}
Base::Base(const Base& obj)
{
    a = obj.a;
    cout << "Base Copy Constructor" << endl;
}
Base& Base::operator=(const Base& obj)
{
    cout << "Base Assignment Operator" << endl;
    if (this != &obj)
    {
        a = obj.a;
    }
    return *this;
}
void Base::displayBase(ostream& out) const
{
    cout << "displayBase()" << endl;
    out << "Base value: " << a << endl;
}
Base::~Base()
{
    cout << "Base Destructor" << endl;
}
