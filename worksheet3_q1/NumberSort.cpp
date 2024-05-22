/*
  NUMBER_SORT

  summary:    
    Read in a file of numbers. Output integers 
    to one output file and non-integers to another.
    Progress and errors should output to screen.

  example input file ( a .txt file):
    12 203.3 90.0 10000 -34 3.14 2 99.9 23.34567 132200 -3 
    4.4 2 99.9 2.4567 200 -503.3 90.0 2 5 -12.2 12 203.3 
    90.0 10000 -34 3.14 2 99.9 23.34567 532200 -7 4.4 2 
    99.9 2.4567 20000 -503.3 90.0 -34 3.14 2 99.9 0.0 23.3 
    4.4 2 4545.45 300 1
      
  goals:      
    * give usefil error messages
    * try all parts of programs - i.e. test failure points
*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  fstream inFile("numbersort.txt");
  ofstream integerFile("integers.txt"), doubleFile("doubles.txt");
  vector<int> integers;
  vector<double> doubles;
  
  if (!inFile) {
    cerr << "Error: Could not open file numbersort.txt.\n";
    return 1;
  }
  if (!integerFile || !doubleFile) {
    cerr << "Error: Could not open output file.\n";
    return 1;
  }

  cout << "Reading numbers.\n";
  double num;
  while (inFile >> num) {
    if (num == static_cast<int>(num)) {
      integers.push_back(static_cast<int>(num));
    } 
    else {
      doubles.push_back(num);
    }
  }
  cout << "Processing completed.\n";

  cout << "Outputting integers to file.\n";
  for (const auto &i : integers) {
    integerFile << i << ' ';
  }
  cout << "Outputting integers completed.\n";

  cout << "Outputting non-integers to file.\n";
  for (const auto &d : doubles) {
    doubleFile << d << ' ';
  }
  cout << "Outputting non-integers completed.\n";

  return 0;
}