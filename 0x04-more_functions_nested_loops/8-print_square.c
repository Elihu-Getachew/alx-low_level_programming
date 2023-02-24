#include "main.h"

/**
 * print_square - this is a function that prints a square by
 * printing '#' horizontally size number of times and on size
 * number of lines vertically
 *
 * @size: is a parameter that defines the size of the square
 *
 * Return: no return type or it is void
 */
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
