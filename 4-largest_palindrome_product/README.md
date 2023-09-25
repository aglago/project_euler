# Largest Palindrome Product

## Problem Description

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009, which is equal to 91 × 99.

In this problem, we need to find the largest palindrome made from the product of two 3-digit numbers.

## Algorithm

To find the largest palindrome made from the product of two 3-digit numbers, we can follow the following algorithm:

1. Start with two nested loops that iterate through all possible combinations of two 3-digit numbers.
2. Multiply the current pair of numbers and store the result.
3. Check if the result is a palindrome. To do this, convert the result to a string and compare it with its reverse. If they are equal, it is a palindrome.
4. Keep track of the largest palindrome found so far and update it if a larger palindrome is found.
5. After iterating through all possible combinations, the largest palindrome will be stored in the variable.

## Solutions

This problem has been solved in both C and JavaScript:

- C Solution: The C solution to this problem can be found in [solution.c](./solution.c) file. It includes a function to find the largest palindrome product using the algorithm described above. The main function calls this function and prints the result.

- JavaScript Solution: The JavaScript solution to this problem can be found in [solution.js](./solution.js) file. It includes a function to find the largest palindrome product using the algorithm described above. The script calls this function and logs the result to the console.

## Contributions

Contributions to this project are welcomed! Feel free to fork the repository, make improvements, and submit a pull request.

Let me know if you have any questions or need further assistance!
