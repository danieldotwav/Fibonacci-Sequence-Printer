#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 93; // Maxmimum number of fibonacci numbers to print
const int SENTINEL = 999;

void fibo(int numVals);

int main() {
  // Variable Declaration
  int n;
  // NOTE: 93 is the largest number that can be used to return accurate results.
  // Numbers larger than 93 are not stored properly due to bit limitations within the unsigned long int datatype.

  while (n != SENTINEL) {
    cout << "Enter the number of Fibonacci Numbers to Print\n"
      << "Enter " << SENTINEL << " to exit\nSelection >> ";

    cin >> n;

    if (n == SENTINEL) {
      cout << "\nGoodbye!\nProgram Terminated Successfully\n";
    }
    else {
      fibo(n);
    }
  }
  

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