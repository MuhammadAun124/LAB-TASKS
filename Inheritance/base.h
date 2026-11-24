#ifndef BASE_H
#define BASE_H
class Base {
    int val1;
public:
    Base();
    ~Base();
};
class Derived1 : public Base {
    int val2;
public:
    Derived1();
    ~Derived1();
};

class Derived2 : public Derived1 {
    int val3;
public:
    Derived2();
    ~Derived2();
};
#endif
