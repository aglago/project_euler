#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void loop();
int is_pythagorean(int, int, int);

int main() {
	loop();
	return 0;
}

void loop()
{
	int c = 5, b = 0, a = 0;

	while (a + b + c != 1000)
	{
		b = c - 1;
		while (b)
		{
			a = b - 1;
			while (a)
			{
				int i = is_pythagorean(a, b, c);

				if (i == 1)
				{
					if (a + b + c == 1000)
					{
						printf("%d X %d X %d = %d\n", a, b, c, a*b*c);
						return;
					}
				}
				a--;
			}
			b--;
		}
		c++;
	}
	printf("loop ended\n");
}

int is_pythagorean(int a, int b, int c)
{
	int sum = a*a + b*b;

	if (sum == c*c)
		return (1);
	return (0);
}
