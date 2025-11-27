#include "Rect.h"

#include <iostream>

using std::cout;
using std::endl;

rect::rect(double width, double height): w(width), h(height) {}
void rect::draw() const{
  cout << "Draw a Rect " << w << '*' << h << endl;
}

double rect::area() const{
  return w * h;
}

string rect::name() const{
  return "rect";
}