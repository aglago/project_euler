# Problem 10: Summation of Primes Below Two Million

# Table of Contents

- [Problem Description](#problem-description)
- [Approach](#approach)
	- [Sieve of Eratosthenes](#sieve-of-eratosthenes)
- [Solution](#solution)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Notes](#notes)

## Problem Description

The problem involves finding the sum of all prime numbers below two million. To understand the problem, let's consider an example.

The sum of prime numbers below 10 is 2 + 3 + 5 + 7 = 17. Now, we need to find the sum of all prime numbers below two million.

Your task is to implement an algorithm that calculates the sum of all prime numbers below two million.

## Approach
### Sieve of Eratosthenes
The Sieve of Eratosthenes is a highly efficient algorithm used to find all prime numbers up to a specified limit `N`. It eliminates the multiples of each prime number, starting from 2, up to the square root of `N`, to identify prime numbers within that range. Here's how the Sieve of Eratosthenes works:

1. **Initialization**: Create a list or an array of boolean values, initially assuming all numbers from 2 to `N` are prime.

2. **Iterate Through Numbers**: Start with the first prime number, 2, and mark all its multiples (i.e., numbers divisible by 2) as non-prime. Then, move to the next unmarked number (which is the next prime) and repeat the process.

3. **Marking Multiples as Non-Prime**: For each prime number `p`, iterate through the list of numbers from `p^2` to `N`, in increments of `p`, and mark each of these numbers as non-prime. This is because all smaller multiples of `p` would have already been marked as non-prime by previous prime numbers.

4. **Repeat**: Continue this process until you've iterated through all numbers up to the square root of `N`.

5. **Output**: The unmarked numbers in the list are prime numbers.

Here's a step-by-step example of using the Sieve of Eratosthenes to find prime numbers up to 30:

1. Start with a list of numbers from 2 to 30.
   - `[2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30]`

2. Start with the first prime, 2, and mark its multiples:
   - Mark 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, and 30 as non-prime.

3. Move to the next unmarked number, which is 3, and mark its multiples:
   - Mark 9, 15, 21, 27 as non-prime.

4. Move to the next unmarked number, which is 5, and mark its multiples:
   - Mark 25 as non-prime.

5. Move to the next unmarked number, which is 7, and mark its multiples:
   - No multiples left to mark.

6. The remaining unmarked numbers are the prime numbers:
   - `[2, 3, 5, 7, 11, 13, 17, 19, 23, 29]`

These are all the prime numbers up to 30.

The Sieve of Eratosthenes is highly efficient, with a time complexity of approximately O(N log log N). It's one of the fastest methods for finding prime numbers within a given range and is suitable for ranges where the limit `N` is not too large. If you need to find prime numbers within a specific range, you can further adapt the sieve by segmenting it to the desired range for even greater efficiency.

## Solution

The problem has been solved using [programming languages C, JavaScript, and Python](./). You can find the code files in the repository with extensions `.c`, `.js`, and `.py`, indicating the programming language used.

## Getting Started

To run the provided solutions, follow these steps:

- **For C**:
  1. Make sure you have a C compiler installed on your machine.
  2. Open the `solution.c` file in a C compiler or IDE.
  3. Compile and run the code.
  4. The program will output the sum of prime numbers below two million.

- **For JavaScript**:
  1. Open the `solution.js` file in a JavaScript environment (e.g., Node.js or a web browser console).
  2. Run the code.
  3. The program will output the sum of prime numbers below two million.

- **For Python**:
  1. Open the `solution.py` file in a Python environment (e.g., Python interpreter or IDE).
  2. Run the code.
  3. The program will output the sum of prime numbers below two million.

## Contributing

Contributions to this project are more than welcome! If you have any improvements, bug fixes, or additional solutions in other programming languages, please feel free to submit a pull request. Let's collaborate and make the code even better!

## Notes

The solutions provided here are optimized for readability and simplicity. There may be alternative approaches or optimizations that can be explored.

Finding the sum of prime numbers can be a computationally intensive task, especially for larger numbers. The provided algorithms may take some time to find the sum of all prime numbers below two million.

If you have any questions or need further assistance, please don't hesitate to ask.

Happy coding!

