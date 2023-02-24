#include "main.h"

/**
 * more_numbers - this is a function that prints
 * numbers starting from 0 to 14, followed by a new line
 * repeats this iteration 10 times before ending with a
 * new line
 *
 * Return: no return type or it is void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);

			j++;
		}
		_putchar('\n');
		i++;
	}
}
