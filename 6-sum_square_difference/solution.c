#include <stdio.h>

void difference(void);
int sum_of_squares(void);
int square_of_sums(void);

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	difference();
	return (0);
}

/**
 * difference - subtracts
 */
void difference(void)
{
	int sumOfSquares = sum_of_squares();
	int squareOfSquares = square_of_sums();

	printf("The difference between the sum of the squares of the first
			 one hundred natural numbers and the square of the sum is: %d\n",
			 squareOfSquares - sumOfSquares);
}

/**
 * sum_of_squares - calculates sum of squares
 * Return: results
 */
int sum_of_squares(void)
{
	int i = 0, sum = 0;

	for (i = 0; i <= 100; i++)
		sum += i * i;

	printf("sum is %d\n", sum);
	return (sum);
}

/**
 * square_of_sums - calculates square of sums
 * Return: results
 */
int square_of_sums(void)
{
	int i = 0, sum = 0;

	for (i = 0; i <= 100; i++)
		sum += i;

	printf("square is %d\n", sum * sum);
	return (sum * sum);
}
