#include <stdio.h>

/**
 * main - Prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int a, b, fib;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (n = 0; n < 48; n++)
	{
		fib = a + b;
		printf(", %ld", fib);
		a = b;
		b = fib;
	}
	printf("\n");

	return (0);
}
