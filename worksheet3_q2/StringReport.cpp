/*
  STRING_REPORT

  summary:    
    an effecient C++ program that takes a string input from the 
    user and displays the number of words, characters, alphabets,
    vowels, consonants, and digits in that given string.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string input;
  int words = 0, characters = 0, alphabets = 0, 
      vowels = 0, consonants = 0, digits = 0;
  bool inWord = false;

  cout << "Enter a string: ";
  getline(cin, input);

  for (char c : input) {
    if (isalpha(c)) {
      alphabets++;

      if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || 
      tolower(c) == 'o' || tolower(c) == 'u') {
        vowels++;
      }
      else {
        consonants++;
      }
    }
    else if (isdigit(c)) {
      digits++;
    }

    if (c != ' ' && !inWord) {
      words++;
      inWord = true;
    } 
    else if (c == ' ') {
      inWord = false;
    }

    characters++;
  }

  cout << "Words: " << words << endl;
  cout << "Characters: " << characters << endl;
  cout << "Alphabets: " << alphabets << endl;
  cout << "Vowels: " << vowels << endl;
  cout << "Consonants: " << consonants << endl;
  cout << "Digits: " << digits << endl;

  return 0;
}