/*
  Write a function fo perform the following task.

  Find the maximum and minimum elements of an array and return the difference

  Your function will take an array of doubles and its size, and find the largest and smallest elements of the 
  array. Using those value, calculate and return the difference. Note: including additional library functions is
  not allowed in this exercise - your function must find these values element by element.

  For instance, if the array is

  30.0, 21.1, -10, 5.23, 9.4, 1.01, -1.3

  then the maximum element would be 30.0 and the minimum element would be -10, so the function
  would return 40.0.
*/

#include <iostream>
using namespace std;

double maxMinDiff(const double numArray[], int size) {
  double max = numArray[0];
  double min = numArray[0];

  for (int i = 1; i < size; i++) {
    if (numArray[i] > max) {
      max = numArray[i];
    }
    if (numArray[i] < min) {
      min = numArray[i];
    }
  }

  return max - min;
}

int main() {
  int arraySize = 7;
  double numArray[arraySize] = {30.0, 21.1, -10, 5.23, 9.4, 1.01, -1.3};

  cout << maxMinDiff(numArray, arraySize);

  return 0;
}