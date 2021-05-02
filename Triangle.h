#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include "GeometricObject.h"
using namespace std;

class Triangle: public GeometricObject {
  public:
    Triangle();
    Triangle(double, double, double);
    Triangle(double side1, double side2, double side3, const string& color, bool filled);
    double getSide1() const;
    double getSide2() const;
    double getSide3() const;
    void setSide1(double side1);
    void setSide2(double side2);
    void setSide3(double side3);
    double getArea() const;
    double getPerimeter() const;
  private:
    double side1, side2, side3;
};

#endif