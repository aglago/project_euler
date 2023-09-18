
/**
 * fib - calculate fibonacci
 * @n: number
 * Return: integer
 */
function fib(n)
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
function even_sum()
{
	var i = 1;
	var fib_value = 0;
	var count = 0;

	while (fib_value <= 4000000)
	{
		fib_value = fib(i);
		if (fib_value % 2 == 0)
		{
			count += fib_value;
		}
		i++;
	}
	console.log("The sum of the even-valued terms in the Fibonacci sequence that do not exceed four million is %d", count);
}

console.log("This fibonacci sequence starts from 1.\nForexample the first 10 terms are 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ... \n");

even_sum();
