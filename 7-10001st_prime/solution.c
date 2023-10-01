#include <stdio.h>

void one0001th(void);

/**
 * isPrime - checks whether a number is a prime number
 * @n: parameter
 * Return: 0 (false), 1(true)
 */
int isPrime(long long n)
{
	int i = 2;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry
 * Return: 0 (always)
 */
int main(void)
{
	one0001th();
	return 0;
}

/**
 * one0001th - calculate the 10001th prime number
 */
void one0001th(void)
{
	int position = 0, i = 2, prime = 2;

	while (1)
	{
		if (isPrime(i))
		{
			prime = i;
			position++;
		}

		if (position == 10001)
			break;

		i++;
	}

	printf("The prime number at position %d is %d\n", position, prime);
}
