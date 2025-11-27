#include "Triangle.h"

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

triangle::triangle(double x, double y, double z) : a(x), b(y), c(z) {}

double triangle::area() const {
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

void triangle::draw() const{
  cout << "Draw a Triangle with edges " << a << ", " << b << ", " << c << endl;
}

string triangle::name() const{
  return "triangle";
}