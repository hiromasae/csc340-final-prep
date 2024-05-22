#include <cmath>

#include "Point.h"

Point::Point() {
  this->x = 0;
  this->y = 0;
}

Point::Point(double xVal, double yVal) {
  this->x = xVal;
  this->y = yVal;
}

void Point::setX(double xVal) {
  this->x = xVal;
}

double Point::getX() const {
  return this->x;
}

void Point::setY(double yVal) {
  this->y = yVal;
}

double Point::getY() const {
  return this->y;
}

double Point::calculateDistanceFromOrigin() const {
  return std::sqrt((this->x * this->x) + (this->y * this->y)); 
}

void Point::twiceXtwiceY() {
  this->x *= 2;
  this->y *= 2;
}

void Point::addPointValue(const Point& other) {
  this->x += other.getX();
  this->y += other.getY();
}

Point* Point::reflectOverXaxis() const {
  return Point(-x, y);
}