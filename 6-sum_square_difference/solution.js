difference();

/**
 * difference - subtracts
 */
function difference()
{
	let sumOfSquares = sum_of_squares();
	let squareOfSquares = square_of_sums();
	let diff = squareOfSquares - sumOfSquares;

	console.log("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: " + diff);
}

/**
 * sum_of_squares - calculates sum of squares
 * Return: results
 */
function sum_of_squares()
{
	let i = 0, sum = 0;

	for (i = 0; i <= 100; i++)
		sum += i * i;

	console.log("sum is " + sum);
	return (sum);
}

/**
 * square_of_sums - calculates square of sums
 * Return: results
 */
function square_of_sums()
{
	let i = 0, sum = 0;

	for (i = 0; i <= 100; i++)
		sum += i;

	console.log("square is " + sum * sum);
	return (sum * sum);
}
