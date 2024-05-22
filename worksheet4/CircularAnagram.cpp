/*
  Part I: Write a function
  Part II: Write a full .cpp code file for the following question

  Generate the circular anagrams of a string (a subset of all anagrams)
  Given an input string, find the next circular anagram of that string. There are many
  build-in operators to manipulate substring, however we will write out own (i.e your
  program must progress char by char).

  Fop instance, if the string is "great job", the function should return the string "reat
  jobg". All the circular anagrams of the sample string are shown on the right. Do not 
  modify the given string. 

  reat jobg
  eat jobgr
  at jobgre
  t jobgrea
    jobgreat
  jobgreat
  obgreat j
  bgreat jo
  great job
*/

#include <iostream>
#include <string>
using namespace std;

// Part I
string nextCircularAnagram(const string& input) {
  if (input.empty()) {
    return input;
  }

  string result = input.substr(1) + input[0];
  return result;
}

// Part II
int main() {
  string input;
  string anagram;

  cout << "Enter a string: ";
  getline (cin, input);
  anagram = input;

  for (int i = 0; i < input.size(); i++) {
    anagram = nextCircularAnagram(anagram);
    cout << anagram << endl;
  }

  return 0;
}