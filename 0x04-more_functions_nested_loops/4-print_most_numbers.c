#include "main.h"

/**
 * print_most_numbers - this is a function that prints
 * numbers starting from 0 to 9 exluding 2 and 4, followed by a new line
 *
 * Return: no return type or it is void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar('0' + i);
			i++;
		}
	}
	_putchar('\n');
}
