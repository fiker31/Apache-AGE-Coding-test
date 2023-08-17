# Apache-AGE-Coding-test
# Question 1 (Backend)
Developing Apache AGE requires a lot of logical thinking that backend development often requires.

## Description
This project demonstrates a simple calculator program written in C. It performs addition, subtraction, multiplication, division, and calculates Fibonacci numbers.

## Development Environment
The project was developed using the following environment:
- Programming Language: C
- Compiler: GCC (GNU Compiler Collection)
- Operating System: [Specify the operating system used during development, e.g., Windows, macOS, Linux]

## Prerequisites
To compile and run the source code, ensure that you have the following installed on your system:
- GCC compiler (or any C compiler compatible with your operating system)
- [Any additional dependencies or libraries, if applicable]

## Compilation and Execution
Follow these steps to compile and run the source code:

1. Clone the repository or download the source code files to your local machine.

2. Open a terminal or command prompt and navigate to the project directory.

3. Compile the source code using the following command:
`gcc Question_1.c`
If you are using a different C compiler, adjust the command accordingly.

4. After successful compilation, an executable file named `a` (or the specified output filename) will be generated in the project directory.

5. Run the program by executing the command: 
If you're on Windows, use the command `a` (or the specified output filename)  instead.

6. The program will display the output of various calculations, including addition, subtraction, multiplication, and Fibonacci numbers.

7. Follow the on-screen instructions, if any, to provide input values or interact with the program.

## Examples
Here are some example inputs and outputs you may encounter while running the program:
add: 16
mul: 20
sub: -4
fibo: 2

# Question 2 (Backend)
Developing Apache AGE requires a lot of logical thinking that backend development often requires.

# Fibonacci Sequence Calculation

This repository contains implementations of the Fibonacci sequence calculation using three different approaches: recursive, iterative, and memoization. The Fibonacci sequence is defined by the recurrence relation F(n) = F(n-3) + F(n-2), with base cases F(0) = 0, F(1) = 1, and F(2) = 2.

## Implementation

The Fibonacci sequence can be calculated using the following approaches:

1. Recursive Approach:
   - The recursive approach directly follows the mathematical recurrence relation.
   - It is implemented using a recursive function that calls itself with the appropriate values.
   - Advantages:
     - Simple and straightforward implementation.
   - Disadvantages:
     - Inefficient for large values of n due to repeated calculations of the same Fibonacci numbers.
     - Exponential time complexity, resulting in slower performance as n increases.

2. Iterative Approach:
   - The iterative approach avoids redundant calculations by iteratively updating the Fibonacci values.
   - It is implemented using a loop that iterates from the base cases to the desired value of n.
   - Advantages:
     - Efficient implementation that avoids redundant calculations.
     - Linear time complexity, resulting in faster performance compared to the recursive approach.
   - Disadvantages:
     - Requires additional variables to store and update the values during the iteration.
     - Slightly more complex implementation compared to the recursive approach.

3. Memoization Approach:
   - The memoization approach eliminates redundant calculations by caching previously computed Fibonacci numbers.
   - It is implemented using an array or hash table to store and retrieve the calculated values.
   - Advantages:
     - Efficient implementation that avoids redundant calculations by caching values.
     - Linear time complexity, resulting in faster performance compared to the recursive approach.
   - Disadvantages:
     - Requires additional memory to store the cache array or hash table, which can be a concern for large values of n.
     - More complex implementation due to cache management.

## Usage

To use the Fibonacci sequence calculation, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/fiker31/Apache-AGE-Coding-test.git
2. Compile the C code

   ```bash
   gcc fibonacci.c -o fibonacci
3. Run the executable:
   
   ```bash
   ./fibonacci
4. Modify the main function in the fibonacci.c file to specify the desired value of n.

5. Choose the implemented function (fibonacci_recursive, fibonacci_iterative, or fibonacci_memoization) to calculate the Fibonacci sequence.

6. Build and execute the C program to see the calculated Fibonacci numbers.

