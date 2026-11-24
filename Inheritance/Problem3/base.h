#ifndef BASE_H
#define BASE_H
class Base
{
protected:
    int a;
public:
    Base(int x);
    Base(const Base& obj);
    ~Base();
};
#endif
