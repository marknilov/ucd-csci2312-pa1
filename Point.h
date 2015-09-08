// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z; //third dimensional point

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);  //set z method
    //math functions
    double distanceTo(Point&, Point&);      //DistanceTo function
    double computeArea(Point&, Point&, Point&);   //computeArea function

  // Accessor methods
  double getX();
  double getY();
  double getZ();  //get z
};

#endif // __point_h