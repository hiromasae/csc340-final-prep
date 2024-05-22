/*
  POLYMORPHISM

  (1) overload the output-to-a-stream operator << so that 
      it can take both filestreams and cout. In other words,
      the following code would work:

  Point* vertexPtr = new Point(3, 4);
  cout << *vertexPtr << endl;
  // would output:
  // (3, 4)

  fout << *vertexPtr << endl;
  // would output:
  // (3, 4)
  // to a file, assuming fout is a properly setup ofstream object

  (2) make Node a template class such that it would work with
      current use of LinkedList of strings. 
*/

#include <iostream>
#include <fstream>

std::ostream& operator<<(std::ostream& os, const Point& point) {
  os << "(" << point.getX() << ", " << point.getY() << ")";
  return os;
}

template <typename T>
class Node {
  private:
    T data;
    Node* next;
  public:
    Node(const T& data);
};