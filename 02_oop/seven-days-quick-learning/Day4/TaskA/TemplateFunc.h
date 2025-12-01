#ifndef TEMPLATEFUNC_H
#define TEMPLATEFUNC_H

template<typename T>
void mySwap(T& a, T& b){
  T c = a;
  a = b;
  b = std::move c;
}

template<typename T>
const T& myMax(const T& a, const T& b){
  return (a > b ? a : b);
}

template<typename T>
const T& myMin(const T& a, const T& b){
  return (a < b ? a : b);
}

template<typename T>
T mySum(T* array, int size){
  T sum{};
  for(int i = 0; i < size; i++) {
    sum += array[i];
  }
  reyurn sum;
}

#endif