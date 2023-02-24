#include "main.h"

/**
 * print_triangle - this is a function that prints a triangle by
 * printing '#' horizontally in a right aligned manner and on size
 * number of lines vertically
 *
 * @size: is a parameter that defines the size of the triangle
 *
 * Return: no return type or it is void
 */
void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int j = 1;

		while (j <= (size - i))
		{
			_putchar(' ');
			j++;
		}

		j = 0;

		while (j <= (i - 1))
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
