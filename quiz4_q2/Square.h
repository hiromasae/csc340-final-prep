#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"

/*
  A square is defined by an anchor point,
  the lower left point of the square,
  and the length of the square's sides.
*/

struct Square {
  private:
    double side;        // length of Square's sides
    Point* anchorPtr; // lower left point of Square

  public:
    Square();         // has side length of one at (0, 0)
    Square(double sideLength, Point* xVal = nullptr, Point* yVal = NULL);
    Square(double sideLength, Point* givenPt);
    ~Square();        // optional ~Square is extra credit
    void setSide(double sideLength);
    double getSide() const;
    void setAnchor(Point* givenPt);
    Point* getAnchor() const;
    double getArea() const;
};

#endif // SQUARE_H