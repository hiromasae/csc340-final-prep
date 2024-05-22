/*
  ARRAY_PALINDROME

  goal:   
    Given an array of integers, determine if the numbers form a
    palindrome - i.e. they are the same forward and backwards.
    Use a recursive function to check if array is a palindrome.

  examples:   
    Enter up to 100 numbers, separated by spaces: 10 3 4 6 4 3 10
    That is a palindrome!

    Enter up to 100 numbers, separated by spaces: 3 3 4 3
    That is NOT a palindrome.  
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(vector<int>& arr, int start, int end) {
  if (start >= end) {
    return true;
  }
  if (arr[start] == arr[end]) {
    return isPalindrome(arr, start + 1, end - 1);
  }
  else {
    return false;
  }
}

int main() {
  string numString;
  vector<int> numArray; 

  cout << "Enter up to 100 numbers, separated by spaces: ";
  getline(cin, numString);

  stringstream ss(numString);
  int num;

  while (ss >> num) {
    numArray.push_back(num);
  }

  int n = numArray.size();

  if (isPalindrome(numArray, 0, n - 1)) {
    cout << "That is a palindrome!\n";
  }
  else {
    cout << "That is NOT a palindrome.\n";
  }

  return 0;
}