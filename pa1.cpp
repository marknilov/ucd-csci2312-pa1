//
// Created by Mark Nilov on 9/4/2015
//
#include <iostream>
#include <iomanip>
#include "Point.h"
using namespace std;

int main()
{
    //Declarations
    Point x;
    Point y;
    Point z;
    double num;
    double area;

    cout << "Welcome, type in the coordinates of a triangle and I will find the area " << endl;
    //First point Coordinates
    cout << "Please enter the x coordinate of the first point " << endl;
    cin >> num;
    x.setX(num);
    cout << "Please enter the y coordinate of the first point" << endl;
    cin >> num;
    x.setY(num);
    cout << "Please enter the z coordinate of the first point" << endl;
    cin >> num;
    x.setZ(num);
    //Second point Coordinates
    cout << "Please enter the x coordinate of the second point " << endl;
    cin >> num;
    y.setX(num);
    cout << "Please enter the y coordinate of the second point" << endl;
    cin >> num;
    y.setY(num);
    cout << "Please enter the z coordinate of the second point" << endl;
    cin >> num;
    y.setZ(num);
    //Third point Coordinates
    cout << "Please enter the x coordinate of the third point " << endl;
    cin >> num;
    z.setX(num);
    cout << "Please enter the y coordinate of the third point" << endl;
    cin >> num;
    z.setY(num);
    cout << "Please enter the z coordinate of the third point" << endl;
    cin >> num;
    z.setZ(num);
    //calls area function and prints area
    area = x.computeArea(x,y,z);
    cout << "area of triangle = " << setprecision(3) << area;
    return 0;
}
