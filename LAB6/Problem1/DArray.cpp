
#include "darray.h"
darray::darray() {
    size = 0;
    capacity = 2;
    ptr = new int[capacity];
}
darray::~darray() {
    delete[] ptr;
}
darray& darray::operator=(const darray& other) {
    if (this != &other) {
        delete[] ptr;
        size = other.size;
        capacity = other.capacity;
        ptr = new int[capacity];
        for (int i = 0; i < size; ++i) {
            ptr[i] = other.ptr[i];
        }
    }
    return *this;
}
void darray::push_back(int value) {
    if (size == capacity) {
        int newCapacity = capacity * 2;
        int* newptr = new int[newCapacity];
        for (int i = 0; i < size; ++i) {
            newptr[i] = ptr[i];
        }
        delete[] ptr;
        ptr = newptr;
        capacity = newCapacity;
    }
    ptr[size] = value;
    ++size;
}
void darray::print(ostream& out) const {
    for (int i = 0; i < size; ++i) {
        out << ptr[i];
        if (i < size - 1) {
            out << " ";
        }
    }
}
ostream& operator<<(ostream& out, const darray& arr) {
    arr.print(out);
    return out;
}
