# Problem 9: Special Pythagorean Triplet

## Problem Description

A Pythagorean triplet is a set of three natural numbers, `a < b < c`, for which the following equation holds: a^2 + b^2 = c^2

For example, `3^2 + 4^2 = 9 + 16 = 25 = 5^2`.

The problem requires finding a Pythagorean triplet where the sum of the three numbers (`a + b + c`) is equal to 1000. The task is to find the product `abc` of the triplet.

Your goal is to implement an algorithm that finds the required Pythagorean triplet and calculates the product.

## Approach

To solve this problem, we can use a brute-force approach that iterates through all possible values of `a`, `b`, and `c` to find the Pythagorean triplet that satisfies the given conditions.

Here's an outline of the approach:

1. Initialize a variable `c` to 5 (arbitrary starting point).
2. Use nested loops to iterate through all possible values of `a`, `b`, and `c`.
   - Start with `b` as `c - 1` and `a` as `b - 1`.
   - Decrease `a` in an inner loop until it reaches 1.
   - Decrease `b` in an outer loop until it reaches 1.
   - Increase `c` after each iteration of the outer loop.
3. Implement a helper function `is_pythagorean(a, b, c)` to check whether a set of numbers (`a`, `b`, `c`) forms a Pythagorean triplet.
   - Calculate the sum of squares of `a` and `b`.
   - If the sum is equal to the square of `c`, return 1 (true).
   - Otherwise, return 0 (false).
4. Check whether the current set of numbers forms a Pythagorean triplet.
   - If it does, check whether the sum of the triplet is equal to 1000.
   - If the sum is 1000, calculate the product `abc` and print the result.
   - If the sum is not 1000, continue iterating.
5. Repeat steps 2-4 until the triplet with a sum of 1000 is found.

## Solution

The problem has been solved using the C programming language. You can find the code file in the repository.

## Getting Started

To run the provided solution, follow these steps:

1. Make sure you have a C compiler installed on your machine.
2. Open the solution file in a C compiler or IDE.
3. Compile and run the code.
4. The program will output the product `abc` of the Pythagorean triplet with a sum of 1000.

## Contributing

Contributions to this project are more than welcome! If you have any improvements, bug fixes, or additional solutions, please feel free to submit a pull request. Let's collaborate and make the code even better!

## Notes

The provided solution uses a brute-force approach, which may not be the most efficient solution for larger inputs. There may be alternative algorithms or optimizations that can be explored.

If you have any questions or need further assistance, please don't hesitate to ask.

Happy coding!
