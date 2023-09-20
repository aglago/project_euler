function isPrime(n)
{
	var i = 2;

	for (i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

function primefactors(n)
{
	var i = 1;
	var lastPrime = 2;
	var originalN = n;

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
		console.log(n + " has no prime factors");

	console.log("The largest prime factor of " + originalN + " is " + lastPrime);
}

primefactors(600851475143);
