# Largest Prime Factor

## Problem Description

The prime factors of a number are the prime numbers that can divide the number evenly. For example, the prime factors of 13195 are 5, 7, 13, and 29.

In this problem, we need to find the largest prime factor of the number 600851475143.

## Algorithm

To find the largest prime factor of a given number, we can follow the following algorithm:

1. Start with a number `n` equal to the given number.
2. Initialize a variable `lastPrime` to 2, which will store the largest prime factor.
3. Check if `n` is greater than 1.
4. If `n` is greater than 1, iterate through numbers from 1 to `n`.
   - If `n` is divisible by the current number `i` and `i` is a prime number, update `lastPrime` to `i` and divide `n` by `i`.
5. Print the largest prime factor stored in `lastPrime`.

**Note**: In the provided C solution, the number is declared as `long long int` to accommodate the larger value of 600851475143. The `long long int` data type is used for integers that require a larger range of values. Make sure to use a compatible data type in other programming languages if the number exceeds the range of a regular `int` or `long` data type.

## Solutions

This problem has been solved in both C and JavaScript:

- C Solution: The C solution to this problem can be found in [solution.c](./solution.c) file. It includes a `primefactors` function to calculate the largest prime factor using the algorithm described above. The main function calls the `primefactors` function and prints the result.

- JavaScript Solution: The JavaScript solution to this problem can be found in [solution.js](./solution.js) file. It includes a `primeFactors` function to calculate the largest prime factor using the algorithm described above. The script calls the `primeFactors` function and logs the result to the console.

## Contributions

Contributions to this project are welcomed! Feel free to fork the repository, make improvements, and submit a pull request.

Let me know if you have any questions or need further assistance!
