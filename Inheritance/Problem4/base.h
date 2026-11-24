#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
class Base
{
protected:
    int a;
public:
    Base(int x);
    Base(const Base& obj);
    Base& operator=(const Base& obj);
    void displayBase(ostream& out) const;
    ~Base();
};
#endif
