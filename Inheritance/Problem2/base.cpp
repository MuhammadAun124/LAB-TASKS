#include <iostream>
#include "Base.h"
using namespace std;
Base::Base(int x)
{
    a = x;
    cout << "Base Constructor" << endl;
}
Base::~Base()
{
    cout << "Base Destructor" << endl;
}
