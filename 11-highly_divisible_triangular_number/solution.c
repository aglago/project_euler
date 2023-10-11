#include <stdio.h>
#include <stdbool.h>

bool isFactor(int, int);
int num_of_factors(int);


int main(void)
{
	/*generate triangle numbers here*/
	int i = 2, t_num = 1;

	while (i)
	{
		t_num += i;

		if (num_of_factors(t_num) > 500)
			break;
		i++;
	}

	printf("the value of the first triangle number to have over five hundred divisors is: %d\n", t_num);
	return (0);
}

bool isFactor(int t_num, int divisor)
{
	if (t_num % divisor == 0)
		return (true);
	return (false);
}

int num_of_factors(int t_num)
{
	int i = 0, num_of_fact = 0;

	for (i = 1; i <= t_num / 2; i++)
	{
		if (isFactor(t_num, i))
			num_of_fact += 2;
	}

	return (num_of_fact);
}
