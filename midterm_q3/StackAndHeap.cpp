/* 
  Given the following code, (a) sketch the stack and heap. (b) What would the output be?
*/

#include <iostream>
using namespace std;

int main() {
  int score = 25;             // Stack: int score 0x01 (25)
  int* intPtr = new int;      // Stack: int* intPtr 0x02 (0x100) -> Heap: int 0x100
  int* numPtr = new int;      // Stack: int* numPtr 0x03 (0x200) -> Heap: int 0x200
  int* dataPtr = NULL;        // Stack: int* dataPtr 0x04 (NULL)

  dataPtr = &score;           // Stack: int* dataPtr 0x04 (0x01) -> Stack: int score 0x01 (25)
  *numPtr = 5;                // Heap: int 0x200 (5)
  *intPtr = *numPtr * score;  // Heap: int 0x200 (5) * Stack: int score 0x01 (25)

  cout << "A: "    << "\n"    
       << score    << "\n"    // 25
       << *intPtr  << "\n"    // 125
       << *numPtr  << "\n"    // 5
       << *dataPtr << "\n"    // 25
       << dataPtr  << "\n"    // 0x01
       << &dataPtr << "\n";   // 0x04

  dataPtr = numPtr;           // Stack: int* dataPtr 0x04 (0x200) -> Heap: int 0x200 (5)
  numPtr = intPtr;            // Stack: int* numPtr 0x03 (0x100) -> Heap: int 0x100 (125)
  intPtr = &score;            // Stack: int* intPtr 0x02 (0x01) -> Stack: int score 0x01 (25)
  score = score - 5;          // Stack: int score 0x01 (20)

  cout << "B: "    << "\n"    
       << score    << "\n"    // 20
       << *intPtr  << "\n"    // 20
       << *numPtr  << "\n"    // 125
       << *dataPtr << "\n";    // 5

  *intPtr = *dataPtr;         // Stack: int score 0x01 (5)
  *dataPtr = *numPtr;         // Heap: int 0x200 (125)
  score = score + 10;         // Stack: int score 0x01 (15)
  *numPtr++;                  // Heap: int 0x100 (126)

  cout << "C: "    << "\n"    
       << score    << "\n"    // 15
       << *intPtr  << "\n"    // 15
       << *numPtr  << "\n"    // 126
       << *dataPtr << "\n";   // 125

  return 0;
}

/*
  (c) After we're done, which items need to be deallocated? Write the line of code for that cleanup.
        delete numPtr;  // deallocate 0x100
        delete dataPtr; // deallocate 0x200     
        OR
        dataPtr = numPtr = NULL;
*/