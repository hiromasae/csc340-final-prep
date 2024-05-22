/*
  UNKNOWN

  summary:    
    prints out all prime numbers between 2 and 100
      
  overview: 
*/

#include <iostream> 
#include <cmath>
using namespace std;

int main() {
  cout << "Output:\n";

  for (int i = 2; i <= 100; i++) {
    int ctr = 0;

    for (int j = 2; j <= sqrt(i); j++) {
      if (i % j == 0) {
        ctr = 1;
      }
    }
    if (ctr == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}