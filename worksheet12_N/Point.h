/*
  POINT.H

  Define the following methods for the Point struct below:
  (1) .calculateDistanceFromOrigin() -- should return how far away the
      Point is from (0, 0).
  (2) .twiceXtwiceY() -- should double the value of both coordinate
      elements . So if the point was (1, 3) it would become (2, 6).
  (3) .addPointValue() -- should take a different Point, and add its
      coordinates to the Point. So if the Point was (1, 3) and the Point
      value to add was (5, -2), the Point would become (1 + 5, -2 + 6) = (6, 4).
  (4) .reflectOverXaxis() -- should return a pointer to a new Point which is 
      the reflection over the x-axis of the Point. So, if our Point is (1, 3)
      then the new Point would be (-1, 3).

  Next, write the file Point.cpp, implementing all the defined methods.  
*/

#ifndef POINT_H
#define POINT_H

/*
  A Point is defined by two doubles represent the x & y coordinates
  of the point on the cartesian plane.
*/
struct Point {
  private:
    double x, y;
  
  public:
    Point();
    Point(double xVal, double yVal);
    void setX(double xVal);
    double getX() const;
    void setY(double yVal);
    double getY() const;

    double calculateDistanceFromOrigin() const;
    void twiceXtwiceY();
    void addPointValue(const Point& other);
    Point* reflectOverXaxis() const;
};

#endif