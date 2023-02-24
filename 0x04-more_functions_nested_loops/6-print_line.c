#include "main.h"

/**
 * print_line - this is a function that prints a line by
 * printing '_' a given number of times, followed by a new line
 *
 * @n: is a parameter that defines the length of the line
 *
 * Return: no return type or it is void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
