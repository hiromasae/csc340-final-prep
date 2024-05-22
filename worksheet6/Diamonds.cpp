/*
  DIAMONDS

  goal:
    Output a diamond od user determined size -- must use 2D array.
    Use stars for the pattern and periods for the background
  
  example:
    for input of 5          
    ..*..
    .***.
    *****
    .***.
    ..*..

  overview:
    (1) get user input and validate (i.e. less than screen size)
        (Use a global variable or a #define for max size)
    (2) choose closest odd number, user for both height and width
    (3) create & fill array accordingly, write/use given functions 
    (4) output to screen
*/

#include <iostream>
#include <vector>
using namespace std;

// function prototype declarations (defined below in same file)
void printArray (char chArray[], unsigned int width); //width: size of the array
void fillArray (char fill, char chArray[], unsigned int start, unsigned int end);

#define MAX_SIZE 50

int main() {
  int size;

  do {
    cout << "Enter the size of the diamond (maximum " << MAX_SIZE << "): ";
    cin >> size;
  } 
  while (size > MAX_SIZE || size < 1);

  if (size % 2 == 0) {
    size--;
  }

  char chArray[size][size];

  for (int i = 0; i < size / 2 + 1; i++) {
    fillArray('.', chArray[i], 0, size);
    fillArray('*', chArray[i], size / 2 - i, size / 2 + i + 1);
    fillArray('.', chArray[i], size / 2 + i + 1, size);
  }
  for (int i = size / 2 + 1; i < size; i++) {
    fillArray('.', chArray[i], 0, size);
    fillArray('*', chArray[i], i - size / 2, size - (i - size / 2));
    fillArray('.', chArray[i], size - (i - size / 2), size);
  }

  for (int i = 0; i < size; i++) {
    printArray(chArray[i], size);
  }

  return 0;
}

void printArray (char chArray[], unsigned int width) {
  for (unsigned int i = 0; i < width; i++) {
    cout << chArray[i];
  }
  cout << endl;
}

void fillArray (char fill, char chArray[], unsigned int start, unsigned int end) {
  for (unsigned int i = start; i < end; i++) {
    chArray[i] = fill;
  }
}