# Problem Statement

$2520$ is the smallest number that can be divided by each of the numbers from $1$ to $10$ without any remainder.

What is the smallest positive number that is **evenly divisible** by all of the numbers from $1$ to $20$?

## Example

Given that [2520](https://www.google.com/search?q=2520) is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder, we need to find the smallest number that is divisible by all the numbers from 1 to 20.

## Approach

To solve this problem, we can use the concept of the least common multiple (LCM). The LCM of a set of numbers is the smallest positive number that is evenly divisible by all the numbers in the set.

We can start by initializing the LCM with the value of the first number (1 in this case). Then, we iterate through the numbers from 2 to 20 and update the LCM by finding the LCM of the current number and the previous LCM. This process ensures that the LCM remains divisible by all the numbers encountered so far.

## Solutions

This problem has been solved in two programming languages: C (solution.c) and JavaScript (solution.js). You can find the respective code files in the repository.

Feel free to contribute your own solutions or improvements to the existing ones.

## Getting Started

To run the provided solutions, follow these steps:

**C Solution:**
1. Compile the C code using a C compiler (e.g., gcc).
2. Execute the compiled binary.

**JavaScript Solution:**
1. Make sure you have Node.js installed on your machine.
2. Open a terminal and navigate to the directory containing the solution.js file.
3. Run the command `node solution.js` to execute the JavaScript solution.

## Contributing

Contributions to this project are more than welcome! If you have any improvements, bug fixes, or additional solutions, please feel free to submit a pull request. Let's collaborate and make the code even better!

## Notes

The numbers involved in this problem are relatively small, so the provided solutions should execute quickly. However, if you want to find the smallest number divisible by a larger range of numbers, the execution time may increase significantly.

Keep in mind that the solutions provided here are optimized for readability and simplicity. There may be alternative approaches or optimizations that can be explored.

If you have any questions or need further assistance, please don't hesitate to ask.

Happy coding!
