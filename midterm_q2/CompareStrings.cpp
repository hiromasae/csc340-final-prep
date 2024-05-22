/*
  Write a full C++ program. Read in two strings from the user. Call a function to compare them, (you 
  will also write the function) and report the results.

  The function will compare if these two strings are equal. Two strings are said to be equal when they 
  are equal in length and contain exactly the same characters at the exact same index. There are several 
  built-in comparison functions and operators, however we will write our own (i.e. your function must
  examine character by character). The input is two strings and the function should return true or false.

  For instance, if the two strings were "Today is Monday" and "today is Monday" the function would
  return false.
*/

#include <iostream>
#include <string>
using namespace std;

bool compareStrings(string string1, string string2) {
  if (string1.length() != string2.length()) {
    return false;
  }
  for (int i = 0; i < string1.length(); i++) {
    if (string1[i] != string2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string string1;
  string string2;

  cout << "Enter string 1: ";
  getline(cin, string1);
  cout << "Enter string 2: ";
  getline(cin, string2);

  cout << boolalpha << compareStrings(string1, string2) << endl;

  return 0;
}