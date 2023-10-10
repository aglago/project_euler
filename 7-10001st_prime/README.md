# Problem 7: 10001st Prime Number

# Table of Contents

- [Problem Description](#problem-description)
- [Approach](#approach)
  - [Brute Force Method](#brute-force-method)
  - [Suitable Number Ranges for Brute Force Method](#suitable-number-ranges-for-brute-force-method)
- [Solution](#solution)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [Notes](#notes)


## Problem Description

The problem involves finding the 10001st prime number. To understand the problem, let's consider an example.

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. Now, we need to find the 10001st prime number.

Your task is to implement an algorithm that calculates the 10001st prime number.

## Approach

To solve this problem, we can use a simple algorithm that iterates through numbers and checks whether each number is prime. Once we find the 10001st prime number, we can stop the iteration.

### Brute Force Method
The Brute Force Method for finding prime numbers is one of the simplest and most straightforward techniques for determining whether a given number is prime or not. It involves testing each number in a specified range individually to check if it's prime by dividing it by all integers from 2 up to the square root of the number. Here's how the Brute Force Method works:

1. **Input**: You have a specific range of numbers, say from `L` to `R`, and you want to find all prime numbers within this range.

2. **Iterate Through the Range**: Start iterating through the numbers in the specified range from `L` to `R`.

3. **Prime Check**: For each number `n` in the range, perform the following steps:
   - Initialize a flag or a variable to keep track of whether `n` is prime.
   - Check if `n` is less than 2. If it is, mark it as not prime, as prime numbers must be greater than 1.
   - Otherwise, iterate through all integers from 2 to the square root of `n`. For each integer `i` in this range:
     - Check if `n` is divisible by `i` (i.e., `n % i == 0`). If it is, set the flag to indicate that `n` is not prime and break out of the loop.
   - After the loop, if the flag is still indicating that `n` is prime, then `n` is indeed a prime number.

4. **Output**: Collect and store all the numbers for which the flag indicates primality (i.e., the prime numbers in the specified range).

The Brute Force Method is straightforward and reliable for finding prime numbers, but it can be computationally expensive for very large ranges. It's suitable for relatively small ranges or when you need to find prime numbers as part of a larger computation. More efficient algorithms like the Sieve of Eratosthenes or segmented sieve are preferred for finding primes in larger ranges or when efficiency is crucial. However, the Brute Force Method is a good starting point for understanding the concept of prime numbers and primality testing.

### Suitable Number Ranges for Brute Force Method
The suitability of the Brute Force Method for finding prime numbers in relatively small ranges depends on various factors, including the computational resources available and the desired execution time. However, as a rough guideline, the Brute Force Method is generally practical for ranges up to a few thousand or tens of thousands, depending on the efficiency of the implementation and the performance of the computer running the algorithm.

Here are some approximate ranges:

1. **Up to 1,000**: The Brute Force Method is very efficient for finding prime numbers in this range and can do so almost instantaneously on modern computers.

2. **Up to 10,000**: The method is still quite practical for ranges up to 10,000 and should provide results in a reasonable amount of time.

3. **Up to 100,000**: While it's possible to use the Brute Force Method for ranges up to 100,000, it may start to become noticeably slower, and more efficient algorithms like the Sieve of Eratosthenes or segmented sieve become increasingly attractive.

4. **Beyond 100,000**: For ranges larger than 100,000, the Brute Force Method becomes less practical due to its relatively slow execution time. More efficient algorithms are preferred in this case.

Remember that these are approximate ranges, and the actual performance can vary based on factors such as hardware, programming language, and implementation details. For larger ranges or when dealing with very performance-sensitive applications, using specialized prime-finding algorithms like the Sieve of Eratosthenes or segmented sieve is advisable. These algorithms can efficiently find prime numbers in much larger ranges.

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
