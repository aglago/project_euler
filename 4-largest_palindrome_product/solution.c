#include <stdio.h>
#include <string.h>

void products();
int isPalindromic(int);

/**
 * main - Entry
 * Return: 0 (success)
 */
int main(void)
{
	products();
	return (0);
}

/**
 * products - multiplies 2 3-digit numbers
 */
void products()
{
	int i = 100, j = 100;
	int largestPal = 0;

	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			int product = i * j;

			if (isPalindromic(product) && product > largestPal)
			{
				largestPal = product;
			}
		}
	}

	printf("the largest palindromic number that results from the product of 3-digit numbers is: %d\n", largestPal);
}

/**
 * palindrome - finds the largest palindrome
 * Return: 1(if palindromic) or 0 (if not palindromic)
 */
int isPalindromic(int product)
{
	char r_prod[1024], prod[1024];
	int i = 0, j = 0;
	int first_product = product;
	int numberOfdigits = 0;

	/* negative numbers are not palindromic */
	if (product < 0)
		return (0);

	while (first_product)
	{
		r_prod[i] = (first_product % 10) + '0';
		first_product /= 10;
		i++;
	}
	r_prod[i] = '\0';

	numberOfdigits = strlen(r_prod);
	while(r_prod[j] != '\0')
	{
		prod[j] = r_prod[numberOfdigits - 1];
		numberOfdigits--;
		j++;
	}
	prod[j] = '\0';

	if (strcmp(prod, r_prod) == 0)
		return (1);

	return (0);
}
