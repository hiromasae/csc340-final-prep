#include <iostream>

#include "Point.h"
#include "Square.h"

int main() {
  Point* anchor = new Point(0.0, 0.0);
  Square* sq = new Square(5.0, anchor);

  std::cout << "Side length: " << sq->getSide() << std::endl;
  std::cout << "Area: " << sq->getArea() << std::endl;

  sq->setSide(10);

  std::cout << "New side length: " << sq->getSide() << std::endl;
  std::cout << "New area: " << sq->getArea() << std::endl;

  delete anchor;
  delete sq;

  return 0;
}