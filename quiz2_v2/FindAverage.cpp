/*
  Write a function to perform the following task.

  Find the average value of the elements of an array

  Your function will take an array of doubles and its size, and find and return the average value of all the
  elements of the array. Note: including additional library functions is not allowed in this exercise - your 
  function must find these values element by element.

  For instance, if the array is

  30.0, 12.1, -10, 5.23, 7.9, 14.77

  then the function would return 10.0 
*/

#include <iostream>
using namespace std;

double findAverage(const double numArray[], int size) {
  double sum = 0;

  for (int i = 0; i < size; i++) {
    sum += numArray[i];
  }

  return sum / size;
}

int main() {
  int arraySize = 6;
  double numArray[arraySize] = {30.0, 12.1, -10, 5.23, 7.9, 14.77};

  cout << findAverage(numArray, arraySize);

  return 0;
}