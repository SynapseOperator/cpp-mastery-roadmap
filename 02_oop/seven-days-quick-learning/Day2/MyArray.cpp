#include "MyArray.h"

#include <iostream>
using std::cout;
using std::endl;

MyArray::MyArray(int x) {
  size = x;
  capacity = x;
  data = new int[capacity];
  for (int i = 0; i < size; i++) data[i] = 0;
  cout << "Create array which size" << size << endl;
}

MyArray::MyArray(const MyArray& other) {
  capacity = other.capacity;
  size = other.size;
  data = new int[capacity];
  for (int i = 0; i < size; i++) data[i] = other.data[i];
  cout << "Create array which size" << size << endl;
}

MyArray::MyArray(MyArray&& other) noexcept{
  size = other.size;
  capacity = other.capacity;
  data = other.data;
  
  other.data = nullptr;
  other.size = 0;
  other.capacity = 0;
}

MyArray& MyArray::operator=(const MyArray& other) {
  if (this == &other) return *this;
  delete[] data;
  capacity = other.capacity;
  size = other.size;
  data = new int[capacity];
  for (int i = 0; i < size; i++) data[i] = other.data[i];
  return *this;
}

MyArray& MyArray::operator=(MyArray&& other) noexcept{
  if(this == &other) return *this;
  delete[] data;
  data = other.data;
  capacity = other.capacity;
  size = other.size;

  other.data = nullptr;
  other.capacity = 0;
  other.size = 0;

  return *this;
}

MyArray::~MyArray() {
  cout << "Array has been deleted" << endl;
  delete[] data;
}

void MyArray::set(int index, int value) {
  if (index >= size) {
    cout << "Out-of-bound" << endl;
    return;
  }
  data[index] = value;
}

int MyArray::get(int index) const {
  if (index >= size) {
    cout << "Out-of-bound" << endl;
    return -1;
  }
  return data[index];
}

void MyArray::print() const {
  if (size == 0) {
    cout << "Empty" << endl;
    return;
  }
  cout << "size / capacity:" << size << " / " << capacity << endl;
  for (int i = 0; i < size; i++) cout << data[i] << ' ';
  cout << endl;
}

void MyArray::push_back(int x) {
  if (size == capacity) {
    int newCap = (capacity == 0 ? 1 : capacity * 2);
    int* newData = new int[newCap];

    for (int i = 0; i < size; i++) newData[i] = data[i];

    delete[] data;

    data = newData;
    capacity = newCap;
  }

  data[size] = x;
  size++;
}

int& MyArray::operator[](int index) {
  if (index < 0 || index >= size) {
    cout << "Out-of-bounds" << endl;
    return data[0];
  }
  return data[index];
}

const int& MyArray::operator[](int index) const {
  if (index < 0 || index >= size) {
    cout << "Out-of-bounds" << endl;
    return data[0];
  }
  return data[index];
}

void MyArray::insert(int index, int value) {
  if (index < 0 || index > size) {
    cout << "Out-of-bounds in insert()" << endl;
    return;
  }

  if (size == capacity) {
    int newCap = (capacity == 0 ? 1 : capacity * 2);
    int* newData = new int[newCap];
    for (int i = 0; i < size; ++i) newData[i] = data[i];
    delete[] data;
    data = newData;
    capacity = newCap;
  }

  for (int i = size; i > index; --i) {
    data[i] = data[i - 1];
  }

  data[index] = value;
  size++;
}

void MyArray::erase(int index) {
  if (index < 0 || index >= size) {
    cout << "Out-of-bounds" << endl;
    return;
  }
  for (int i = index; i < size - 1; i++) {
    data[i] = data[i + 1];
  }
  size--;
}