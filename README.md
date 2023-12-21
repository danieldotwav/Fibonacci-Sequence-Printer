# Fibonacci Number Generator

This C++ program generates the Fibonacci sequence up to a specified number of elements. The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.

## Features

- Generates Fibonacci numbers up to the 93rd number in the sequence.
- Ensures accurate results within the bit limitations of the `unsigned long int` data type.
- Allows users to specify the number of Fibonacci numbers to generate.
- User-friendly interface for easy interaction.

## Limitations
- The program is limited to generating a maximum of 93 Fibonacci numbers. This limitation is due to the bit size of the unsigned long int data type in C++.
- Values exceeding 93 will result in incorrect calculations due to integer overflow.

## Sample Output
```plaintext
Enter the number of Fibonacci Numbers to Print
Enter 999 to exit
Selection >> 5

-- Fibonacci Sequence --
n = 5

n = 0: 0
n = 1: 1
n = 2: 1
n = 3: 2
n = 4: 3
n = 5: 5
```
