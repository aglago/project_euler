/**
 * isPrime - checks whether a number is a prime number
 * @n: parameter
 * Return: 0 (false), 1(true)
 */
function isPrime(n)
{
	let i = 2;

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
 * one0001th - calculate the 10001th prime number
 */
function one0001th()
{
	let position = 0, i = 2, prime = 2;

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

	console.log("The prime number at position " + position + " is " + prime);
}

one0001th();
