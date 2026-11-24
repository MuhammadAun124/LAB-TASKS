#include "Base.h"
#include <iostream>
using namespace std;
Base::Base() : baseVal(0) {
    cout << "Base()" << endl;
}
Base::Base(int bVal) : baseVal(bVal) {
    cout << "Base(int)" << endl;
}
Base::~Base() {
    cout << "~Base()" << endl;
}
void Base::print() const {
    cout << "print()" << endl;
    cout << "baseVal: " << baseVal << endl;
}
Derived1::Derived1() : Base(), d1Val(0) {
    cout << "Derived1()" << endl;
}
Derived1::Derived1(int bVal, int d1Val) : Base(bVal), d1Val(d1Val) {
    cout << "Derived1(int, int)" << endl;
}
Derived1::~Derived1() {
    cout << "~Derived1()" << endl;
}
void Derived1::print() const {
    cout << "print()" << endl;
    Base::print();
    cout << "d1Val: " << d1Val << endl;
}
Derived2::Derived2() : Derived1(), d2Val(0) {
    cout << "Derived2()" << endl;
}
Derived2::Derived2(int bVal, int d1Val, int d2Val) : Derived1(bVal, d1Val), d2Val(d2Val) {
    cout << "Derived2(int, int, int)" << endl;
}
Derived2::~Derived2() {
    cout << "~Derived2()" << endl;
}
void Derived2::print() const {
    cout << "print()" << endl;
    Derived1::print();
    cout << "d2Val: " << d2Val << endl;
}
