#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

const int MAX = 93; // Maxmimum number of fibonacci numbers to print
const int SENTINEL = 999;

void fibo(int numVals);
void purgeInputErrors();

int main() {
  // Variable Declaration
  int n;
  // NOTE: 93 is the largest number that can be used to return accurate results.
  // Numbers larger than 93 are not stored properly due to bit limitations within the unsigned long int datatype.

  while (n != SENTINEL) {
    cout << "Enter the number of Fibonacci Numbers to Print\n"
      << "Enter " << SENTINEL << " to exit\nSelection >> ";
    
    if(!(cin >> n)) {
      purgeInputErrors();
    }
    else {
      if (n == SENTINEL) {
        cout << "\nGoodbye!\n";
      }
      else if (n < 0 || n > MAX) {
        cout << "\nError: Please ensure n is a positive integer less than "
          << MAX << " and try again\n\n";
      }
      else {
        fibo(n);
      }
    }
  }

  cout << "Program Terminated Successfully\n";
  return 0;
}

void fibo(int numVals) {
  if (numVals > MAX) {
    cout << "The Maximum Number of Fibonacci Numbers That Can Be Printed Is " << MAX << " Due To Bit Limitations\n\n";
  }
  else {
    unsigned long int previous = 0; // First fibo
    unsigned long int current = 1; // Second fibo
    unsigned long int sum = 0;

    cout << "-- Fibonacci Sequence --\nn = " << numVals << "\n\n"; 

    for(int i = 0; i < numVals + 1; ++i) {
      cout <<  "n = " << i << ": " << previous << '\n';
      
      sum = previous + current;
      previous = current;
      current = sum;
    }
  }
  cout << endl;
}

// Handle input errors
void purgeInputErrors() {
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cout << "\nError: Invalid Input\n\n";
}