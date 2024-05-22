#ifndef POINT_H
#define POINT_H

class Point {
  private: 
    double x;
    double y;
  
  public:
    // constructors, sets x and y to zero if no value is passed
    Point();
    Point(double xVal, double yVal);

    // accessor methods, allow setting and getting (x, y) values
    void setX(double xVal);
    double getX() const;
    void setY(double yVal);
    double getY() const;
};

#endif