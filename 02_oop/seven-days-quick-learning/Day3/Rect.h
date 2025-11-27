#ifndef RECT_H
#define RECT_H

#include "Shape.h"

class rect: public Shape{
  private:
    double w, h;
  public:
    rect(double w, double h);
    void draw() const override;
    double area() const override;
    string name() const override;

    virtual ~rect() {}
};

#endif