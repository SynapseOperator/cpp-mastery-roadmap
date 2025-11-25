#ifndef MYARRAY_H
#define MYARRAY_H

class MyArray {
  private:
    int * data;
    int size;
    int capacity;
  public:
    MyArray(int x);
    MyArray(const MyArray& other);
    MyArray(MyArray&& other) noexcept;
    MyArray& operator=(const MyArray& other);
    MyArray& operator=(MyArray&& other) noexcept;
    ~MyArray();

    void set(int index, int value);
    int get(int index) const;
    void print() const;
    void push_back(int x);
    int& operator[](int index);
    const int& operator[](int index) const;
    void insert(int index, int value);
    void erase(int index);
};

#endif