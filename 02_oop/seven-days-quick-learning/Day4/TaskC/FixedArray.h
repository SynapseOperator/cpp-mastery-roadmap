#ifndef FIXEDARRAY_H
#define FIXEDARRAY_H

template <typename T, int N>
class FixedArray {
 private:
  T data[N];

 public:
  T& operator[](int index) { return data[index]; }
  const T& operator[](int index) const { return data[index]; }
  int size() const { return N; }
  void fill(const T& value) {
    for (int i = 0; i < N; i++) data[i] = value;
  }
};

#endif