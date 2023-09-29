#include <stdio.h>

/*prototypes*/
int smallest_multiple();

/**
 * main - entry point
 * Return: 0 (successful)
 */
int main(void)
{
	smallest_multiple();
	return 0;
}

/**
 * smallest_multiple - description in readme file
 * Return: 0 (successful)
 */
int smallest_multiple(void)
{
	int i = 1, j = 1;
	int flag = 0;

	while (1)
	{
		for (j = 1; j <= 20; j++)
		{
			int div = i % j;

			if (div != 0)
				break;

			if (j == 20)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			printf("The number we are looking for is %d\n", i);
			return (0);
		}
		i++;
	}

	return (-1);
}
