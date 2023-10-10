#include <stdbool.h>
#include <stdio.h>
#define MAX 2000000

void sieve_of_eratosthenes(int n, bool is_prime[]);

/**
 * main - entry
 * Return: 0 (sucess)
 */
int main(void)
{
	int i = 0;
	long long sum = 0;
	bool primes[MAX + 1];

	sieve_of_eratosthenes(MAX, primes);
	for (i = 2; i <= MAX; i++)
	{
		if (primes[i])
			sum += i;
	}
	printf("The sum of all the primes below two million is: %lld\n", sum);

	return (0);
}


/**
 * sieve_of_eratosthenes - finding prime numbers for larger limits
 * @n: limit
 * @is_prime: the prime array
 */
void sieve_of_eratosthenes(int n, bool is_prime[])
{
	int i = 0, p = 0, k = 0;

	/* Initialize all numbers as prime */
	for (i = 2; i <= n; i++)
	{
		is_prime[i] = true;
	}

	/* Mark non-prime numbers */
	for (p = 2; p * p <= n; p++)
	{
		/* If is_prime[p] is still true, then it's prime */
		if (is_prime[p])
		{
			/* Mark all multiples of p as non-prime */
			for (k = p * p; k <= n; k += p)
			{
				is_prime[k] = false;
			}
		}
	}
}

