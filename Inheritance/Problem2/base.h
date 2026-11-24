#ifndef BASE_H
#define BASE_H
class Base {
protected:
    int baseVal;
public:
    Base();
    Base(int bVal);
    ~Base();
    void print() const;
};
class Derived1 : public Base {
protected:
    int d1Val;
public:
    Derived1();
    Derived1(int bVal, int d1Val);
    ~Derived1();
    void print() const;
};
class Derived2 : public Derived1 {
private:
    int d2Val;
public:
    Derived2();
    Derived2(int bVal, int d1Val, int d2Val);
    ~Derived2();
    void print() const;
};
#endif 
