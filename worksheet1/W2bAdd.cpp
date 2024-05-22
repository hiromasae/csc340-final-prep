/*
  W2B_ADD

  goal:   
    add two inputted numbers by iteration (i.e. not using a + b)
      
  overview:
    [1] get user input (two integers)
    [2] output answer
*/

#include <iostream>
using namespace std;

int main () {
  int a, b;
  int sum = 0;

  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;
  cout << "Simple addition gives you " << a << " + " << b << " = " << a + b << endl;

  int original_a = a;

  for (int i = 0; i < abs(b); i++) {
    if (b > 0) {
      a++;
    }
    else {
      a--;
    }
  }
  sum = a;

  cout << "The sum " << original_a << " + " << b << " = " << sum << endl;

  return 0;
}