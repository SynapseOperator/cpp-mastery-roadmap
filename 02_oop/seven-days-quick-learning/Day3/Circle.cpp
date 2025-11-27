#include "Circle.h"

#include <iostream>

using std::cout;
using std::endl;

circle::circle(double r): r(r) {}
void circle::draw() const{
  cout << "Draw a circle with r = " << r <<endl;
}

double circle::area() const{
  return 3.1415926* r * r;
}

string circle::name() const{
  return "circle";
}