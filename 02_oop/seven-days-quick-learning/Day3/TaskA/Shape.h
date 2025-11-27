#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using std::string;

class Shape{
  public:
    virtual double area() const = 0;
    virtual void draw() const = 0;
    virtual string name() const = 0;

    virtual ~Shape() {}
};


#endif