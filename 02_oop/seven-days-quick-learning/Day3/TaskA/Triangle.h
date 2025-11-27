#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class triangle: public Shape{
  private:
    double a, b, c;
  public:
    triangle(double x, double y, double z);
    void draw() const override;
    double area() const override;
    string name() const override;
    
    virtual ~triangle(){};
};

#endif