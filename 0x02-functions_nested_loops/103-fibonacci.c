#include <stdio.h>

/**
 * main - Prints the sum of the even numbers of the Fibonacci sequence
 * with values less than 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, fib, sum;

	a = 1;
	b = 2;
	sum = 0;
	fib = 0;
	while (fib <= 4000000)
	{
		fib = a + b;
		a = b;
		b = fib;

		if ((a % 2) == 0)
			sum += a;
	}
	printf("%ld\n", sum);

	return (0);
}
