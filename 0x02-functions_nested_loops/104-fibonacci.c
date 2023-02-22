#include <stdio.h>

/**
 * main - Prints the first 100 numbers of the Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long int a, b, fib;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);
	for (n = 0; n < 98; n++)
	{
		fib = a + b;
		printf(", %lu", fib);
		a = b;
		b = fib;
	}
	printf("\n");

	return (0);
}
