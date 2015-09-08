#include "Point.h"
#include <cmath>
// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}
//DistanceTo function, takes 2 points as parameters and calculates distance between them
double Point::distanceTo(Point& a, Point& b)   // D = sqrt((x2 - x1)^2 + (y2 - y1)^2 + (z2 - z1)^2)
{
  double distance;
  double ySide;
  double xSide;
  double zSide;
  ySide = pow(b.getX() - a.getX(), 2);
  xSide = pow(b.getY() - a.getY(), 2);
  zSide = pow(b.getZ() - a.getZ(), 2);
  distance = sqrt(ySide + xSide + zSide);
  return distance;
}
//Compute area function, receives 3 points, then calls distanceTo function
//to calculate distance, then does math to find area of triangle
double Point::computeArea(Point& x, Point& y, Point& z) // A = sqrt(s(s-a)(s-b)(s-c))   s = (a+b+c)/2
{
  double area;
  double s;
  double distance1, distance2, distance3;
  distance1 = x.distanceTo(x,y);
  distance2 = x.distanceTo(y,z);
  distance3 = x.distanceTo(x,z);
  s = ((distance1 + distance2 + distance3) / 2);
  area = (sqrt(s * (s - distance1) * (s - distance2) * (s - distance3)));

  return area;
}
// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ() {
  return z;
}