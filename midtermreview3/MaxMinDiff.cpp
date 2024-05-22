/*
  Write a function that takes a vector of strings (assume all words 
  are lowercase and contain only alphabet characters a through z). The 
  function should use iterators to navigate and access the vector, not 
  indices. The function should find the first word not in alphabetical order. 
  For example, if the vector contains “apple”, “banana”, “cherry”, “lime”, 
  “jicama”, “tangerine”, “orange”, the first word out of order is “lime” as 
  it is bigger than the word that follows. Return an iterator to this word. If 
  there is no word out of order, return an iterator that has the .end() value. 
  Note: as usual, using the auto or size_t keywords for known types is not 
  allowed (and all types in this problem are known). Additionally, for 
  quizzes/exams we will not use for-each loops (regular for loops are 
  okay).
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std; 

vector<string>::iterator findOutOfOrder(vector<string>& words) {
  if (words.empty()) {
    return words.end();
  }
  vector<string>::iterator it;
  for (it = words.begin(); it != words.end() - 1; it++) {
    if (*it > *(it + 1)) {
      return it;
    }
  }
  return words.end();
}

int main() {
  vector<string> words{ "apple", "banana", "cherry", "lime",
                        "jicama", "tangerine", "orange" };

  auto it = findOutOfOrder(words);
  if (it != words.end()) {
    cout << *it << " is out of alphabetical order." << endl; // Dereference iterator here
  } 
  else {
    cout << "All words are in alphabetical order." << endl;
  }
}