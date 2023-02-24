#include "main.h"

/**
 * print_diagonal - this is a function that prints a diagonal line by
 * printing '\' a given number of times, followed by a new line
 *
 * @n: is a parameter that defines the length of the diagonal line
 *
 * Return: no return type or it is void
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j <= i - 1)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
