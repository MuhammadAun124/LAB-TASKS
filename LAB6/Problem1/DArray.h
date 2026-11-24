#ifndef DARRAY_H
#define DARRAY_H
#include<iostream>
using namespace std;
class darray
{
    int* ptr;
    int size;
    int capacity;
public:
    darray();
    void push_back(int);
    darray& operator=(const darray& others);
    void print(ostream& out) const;
    ~darray();
};
ostream& operator<<(ostream& out, const darray&);
#endif
