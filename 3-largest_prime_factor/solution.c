#include <stdio.h>

void primefactors(long long int);
int isPrime(long long int);

int main(void)
{
	primefactors(600851475143);
	return 0;
}

void primefactors(long long int n)
{
	long long int i = 1;
	long long int lastPrime = 2;
	long long int originalN = n;

	if (n > 1)
	{
		while (i <= n)
		{
			if (n % i == 0 && isPrime(i))
			{
				lastPrime = i;
				n = n / i;
			}
			i++;
		}
	} else
		printf("%lld has no prime factors\n", n);

	printf("The largest prime factor of %lld is %lld\n", originalN, lastPrime);
}


int isPrime(long long n)
{
	int i = 2;

	for (i = 2; i <= n/2; i++)
	{
		if(n%i == 0)
		{
			return (0);
		}
	}
	return (1);
}
