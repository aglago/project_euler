#include <stdio.h>

int fib(int n);
void even_sum();

/**
 * main - Entry
 * Return: 0 (success)
 */
int main() {
	printf("This fibonacci sequence starts from 1.\nForexample the first 10 terms are 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ... \n");

	even_sum();

	return 0;
}

/**
 * fib - calculate fibonacci
 * @n: number
 * Return: integer
 */
int fib(int n)
{
	/*base statement*/
	if (n == 1)
		return (1);
	else if (n == 2)
		return (2);

	/*recursive statement*/
	return (fib(n - 1) + fib(n - 2));
}

/**
 * even_sum - calculating sum of terms
 */
void even_sum()
{
	int i = 1;
	int fib_value = 0;
	int count = 0;

	while (fib_value <= 4000000)
	{
		fib_value = fib(i);
		if (fib_value % 2 == 0)
		{
			count += fib_value;
		}
		i++;
	}
	printf("The sum of the even-valued terms in the Fibonacci sequence that do not exceed four million is %d\n", count);
}
