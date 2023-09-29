smallest_multiple();

/**
 * smallest_multiple - description in readme file
 * Return: 0 (successful)
 */
function smallest_multiple()
{
	let i = 1, j = 1;
	let flag = 0;

	while (1)
	{
		for (j = 1; j <= 20; j++)
		{
			let div = i % j;

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
			console.log("The number we are looking for is " + i);
			return (0);
		}
		i++;
	}

	return (-1);
}
