/*
  Reverse a String

  Get an input string, output the reverse of that string. There is a built-in reverse operator, however we will 
  write out own (i.e your program must progress char by char). Note: using any of the push/pop methods or 
  the substring/find methods is not allowed in this exercise.

  For instance, if the user enters "Today is Wednesday." then the program's output would be: 

  Enter a sentence: Today is Wednesday.
  The string was: Today is Wednesday.
  The reverse is: .yadsendeW si yadoT
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  string reversed;

  cout << "Enter a sentence: ";
  getline(cin, input);
  cout << "The string was: " << input << endl;
  
  for (int i = input.length() - 1; i >= 0; i--) {
    reversed += input[i];
  }

  cout << "The reverse is: " << reversed << endl;

  return 0;
}