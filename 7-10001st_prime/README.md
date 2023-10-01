# Problem 7: 10001st Prime Number

## Problem Description

The problem involves finding the 10001st prime number. To understand the problem, let's consider an example.

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. Now, we need to find the 10001st prime number.

Your task is to implement an algorithm that calculates the 10001st prime number.

## Approach

To solve this problem, we can use a simple algorithm that iterates through numbers and checks whether each number is prime. Once we find the 10001st prime number, we can stop the iteration.

Here's an outline of the approach:

1. Initialize a counter variable `position` to keep track of the prime numbers found.
2. Initialize a variable `i` to start iterating from the first number, which is 2.
3. Initialize a variable `prime` to store the current prime number.
4. Implement a helper function `isPrime(n)` to check whether a number `n` is prime.
   - The `isPrime(n)` function iterates from 2 to `n/2` and checks whether `n` is divisible evenly by any number in that range.
   - If `n` is divisible by any number, it is not prime, and the function returns 0.
   - If `n` is not divisible by any number, it is prime, and the function returns 1.
5. Iterate over numbers starting from 2 and check whether each number is prime.
6. If a number is prime, update the `prime` variable and increment the `position` counter.
7. Repeat steps 5-6 until the `position` counter reaches 10001.
8. Print the 10001st prime number.

## Solution

The problem has been solved using the C programming language. You can find the code file in the repository.

## Getting Started

To run the provided solution, follow these steps:

1. Make sure you have a C compiler installed on your machine.
2. Open the solution file in a C compiler or IDE.
3. Compile and run the code.
4. The program will output the 10001st prime number.

## Contributing

Contributions to this project are more than welcome! If you have any improvements, bug fixes, or additional solutions, please feel free to submit a pull request. Let's collaborate and make the code even better!

## Notes

The solution provided here is optimized for readability and simplicity. There may be alternative approaches or optimizations that can be explored.

Keep in mind that finding prime numbers can be a computationally intensive task, especially for larger positions. The provided algorithm may take some time to find the 10001st prime number.

If you have any questions or need further assistance, please don't hesitate to ask.

Happy coding!
