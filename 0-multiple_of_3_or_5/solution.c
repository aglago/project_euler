#include <stdio.h>

/**
 * main - multiple of 3 or 5
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int count = 0;

	for (; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count = count + i;
	}

	/*output*/
	printf("sum of all the multiple of 3 or 5 below 1000 is: %d\n", count);
	return (0);
}
