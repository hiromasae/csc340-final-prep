/*
  MYSTERY

  What does this program do? Give 
    (1) a (brief) overall summary, and 
    (2) a useful example with outputs and an explanation
    (or demonstration) of the inner workings. Use CS terminology.
*/

#include <iostream>
#include <string> 
using namespace std;

bool is_it_Q(int n, int i = 2) {
  if (n == 2) {
    return true;
  }
  if (n % i == 0) {
    return false;
  }
  if (i * i > n) {
    return true;
  }  

  return is_it_Q(n, i + 1);
}

int main() {
  int num = 0;

  while (num < 2) {
    cout << "Enter a number greater or equal to 2: ";
    cin >> num;
    cout << "You entered: " << num << endl;
  }

  // prime
  if (is_it_Q(num)) {
    cout << "Yes, the number " << num << " is _________!" << endl;
  }
  else {
    cout << "No, the number " << num << " in not _________." << endl;
  }

  return 0;
}

/*
(1) The program prompts the user to input a number greater than or 
    equal to 2. It then checks if the number is prime using a 
    recursive function is_it_Q. It then outputs whether the input 
    was prime or not.

(2) If the user inputs 5, the program will call the function 
    is_it_Q(5). The function checks if 5 is divisible by 2 (the 
    initial value of i), and since 5 % 2 != 0, the function proceeds 
    to the next condition. The function checks if 2 * 2 > 5, and 
    since 4 !> 5, the function calls itself again, this time i 
    incremented by 1.The function is_it_Q(5, 3) is now called and 
    goes through the conditions once more. This time 3 * 3 > 5 is 
    true, indicating that 5 is a prime number. 

    Enter a number greater or equal to 2: 5
    You entered: 5
    Yes, the number 5 is prime!

    Enter a number greater or equal to 2: 4
    You entered: 4
    No, the number 4 is not prime.
*/