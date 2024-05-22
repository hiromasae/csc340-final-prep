/*
  Write a program that gets a string, calls a function, and outputs the 
  original string and the new string returned by the function. (So the 
  program must keep the original string.) The function will create a new 
  string which mirrors the second half of the input string. For instance, if 
  “Goodbye!” is entered, then “!eybbye!” would be the new string. Or if 
  “Seven 7” is entered, then “7 nen 7” would be the new string.
*/

#include <iostream>
#include <string>
using namespace std;

string mirrorString(string input) {
  int mid = input.length() / 2;
  string mirroredHalf;
  string secondHalf;

  // even number of characters
  if (input.length() % 2 == 0) {
    for (int i = mid; i < input.length(); i++) {
      secondHalf += input[i];
    }
    for (int i = input.length(); i >= mid; i--) {
      mirroredHalf += input[i];
    }
  }
  // odd number of characters
  else {
    for (int i = mid; i < input.length(); i++) {
      secondHalf += input[i];
    }
    for (int i = input.length(); i > mid; i--) {
      mirroredHalf += input[i];
    }
  }
  return mirroredHalf + secondHalf;
}

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  cout << "Original: " << input << endl;
  cout << "Mirrored: " << mirrorString(input) << endl;

  return 0;
}