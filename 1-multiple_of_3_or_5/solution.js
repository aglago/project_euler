// Problem 1 : Sum of multiples of 3 or 5 less than 1000

let i = 0;
let count = 0;

for (; i < 1000; i++)
{
	if (i % 3 === 0 || i % 5 === 0)
		count = count + i;
}
console.log(count);
