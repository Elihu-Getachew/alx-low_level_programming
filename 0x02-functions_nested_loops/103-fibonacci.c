#include <stdio.h>

/**
 * main - Prints the sum of the even numbers of the Fibonacci sequence
 * with values less than 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int a, b, fib, sum;

	a = 1;
	b = 2;
	sum = 0;
	for (n = 0; n < 48; n++)
	{
		fib = a + b;
		if (fib >= 4000000)
		{
			break;
		}
		else
		{
			if ((fib % 2) == 0)
				sum += fib;
		}
		a = b;
		b = fib;
	}
	printf("%ld\n", sum);

	return (0);
}
