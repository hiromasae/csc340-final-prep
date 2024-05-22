/*
  On the previous page, we are given Square.h and information on how to use the class Point. Write the code
  for the entire file Square.cpp below. The method ~Square() is for extra credit; writing it is optional.
*/

#include "Square.h"

Square::Square() {
  this->side = 0;
  this->anchorPtr = NULL;
}   

/*
Square::Square(double sideLength, Point* xVal, Point* yVal) {
  this->side = sideLength;
  if (xVal != NULL && yVal != NULL) {
    this->anchorPtr = new Point(xVal->getX(), yVal->getY());
  } 
  else {
    this->anchorPtr = NULL;
  }
}
*/

Square::Square(double sideLength, Point* givenPt) {
  this->side = sideLength;
  this->anchorPtr = givenPt;
}

Square::~Square() {
  delete this->anchorPtr;
}    

void Square::setSide(double sideLength) {
  this->side = sideLength;
}

double Square::getSide() const {
  return this->side;
}
void Square::setAnchor(Point* givenPt) {
  this->anchorPtr = givenPt;
}

Point* Square::getAnchor() const {
  return this->anchorPtr;
}

double Square::getArea() const {
  return this->side * this->side;
}