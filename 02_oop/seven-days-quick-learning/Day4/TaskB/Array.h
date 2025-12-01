#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array {
 private:
  T* data;
  int size;

 public:
  Array(int n) {
    data = new T[n];
    size = n;
  }
  Array(const Array& other) {
    data = new T[other.size];
    size = other.size;
    for (int i = 0; i < size; i++) data[i] = other.data[i];
  }
  ~Array() {
    delete[] data;
    size = 0;
  }

  Array& operator=(const Array& other) {
    if (this == &other) return *this;
    size = other.size;
    data = new T[size];
    for (int i = 0; i < size; i++) data[i] = other.data[i];
    delete[] data;
    return *this;
  }
  T& operator[](int index) { return data[index]; };
  const T& operator[](int index) const { return data[index]; }
  int getSize() const { return size; }
};

#endif
