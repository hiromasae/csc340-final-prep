/*
  Write a sort function for a vector of strings. The function should use iterators to navigate and access
  the vector, not indices. Use either Bubble Sort or a Selection sort algorithm, and state which you will
  use. The function will sort alpabetically, and the strings can be assumed to be all lowercase and 
  contain only alphabet characters (a through z).
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bubbleSort(vector<string>& strings) {
  bool swapped;
  vector<string>::iterator i, j;

  for (i = strings.begin(); i != strings.end() - 1; i++) {
    swapped = false;

    for (j = strings.begin(); j != strings.end() - (i - strings.begin()) - 1; j++) {

      if (*j > *(j + 1)) {
        swap(*j, *(j + 1));
        swapped = true;
      }
    }
    // If no two elements were swapped in inner loop, then the list is sorted
    if (!swapped) {
      break;
    }
  }
}

void selectionSort(vector<std::string>& vec) {
  vector<std::string>::iterator i, j;
  
  for (i = vec.begin(); i != vec.end() - 1; ++i) {
    vector<std::string>::iterator minElement = i;

    for (j = i + 1; j != vec.end(); ++j) {
      
      if (*j < *minElement) {
          minElement = j;
      }
    }
    swap(*i, *minElement);
  }
}

int main() {
  vector<string> strings{ "banana", "apple", "mango", "strawberry", "pineapple", "blueberry", "raspberry", "kiwi", "orange", "watermelon" };

  bubbleSort(strings);
  //selectionSort(strings);

  for (string x : strings) 
    cout << x << " "; 

  return 0;
}