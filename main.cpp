#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;
int main() {
  double s1, s2, s3;
  string c; 
  bool f;
  cout <<"Enter side 1: ";
  cin >> s1;
  cout << "Enter side 2: ";
  cin >> s2;
  cout << "Enter side 3: ";
  cin >> s3;

  cout << "Enter a color: ";
  cin.ignore();
  getline(cin, c);
  cout << "Enter indication: ";
  cin >> f;

  Triangle t(s1, s2, s3);
  t.setColor(c);
  t.setFilled(f);

  cout << "Area: " << t.getArea() << endl;
  cout << "Perimeter: "<< t.getPerimeter() << endl;
  cout << "Color: " << t.getColor() << endl;
  cout << "Filled: " << (t.isFilled() ? "It's Filled" : "Not Filled") << endl;

}