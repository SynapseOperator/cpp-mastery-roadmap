#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class circle : public Shape{
  private:
    double r;
  public:
    circle(double r);
    void draw() const override;
    double area() const override;
    string name() const override;

    virtual ~circle() {};
};

#endif