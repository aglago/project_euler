/**
 * products - multiplies 2 3-digit numbers
 */
function products()
{
        var i = 100, j = 100;
        var largestPal = 0;

        for (i = 100; i <= 999; i++)
        {
                for (j = 100; j <= 999; j++)
                {
                        var product = i * j;

                        if (isPalindromic(product) && product > largestPal)
                        {
                                largestPal = product;
                        }
                }
        }

        console.log("the largest palindromic number that results from the product of 3-digit numbers is: " + largestPal);
}

/**
 * palindrome - finds the largest palindrome
 * Return: 1(if palindromic) or 0 (if not palindromic)
 */
function isPalindromic(product)
{
        const r_prod = [], prod = [];
        var i = 0, j = 0, k = 0;
        var first_product = product;
        var numberOfdigits = 0;

        while (first_product)
        {
                r_prod[i] = (first_product % 10);
                first_product = Math.floor(first_product / 10);
                i++;
        }

        numberOfdigits = r_prod.length;
        while(numberOfdigits)
        {
                prod[j] = r_prod[numberOfdigits - 1];
                numberOfdigits--;
                j++;
        }

	for (; k <= r_prod.length; k++)
	{
		if (r_prod[k] !== prod[k])
			return (0);
	}

        return (1);
}

products();
