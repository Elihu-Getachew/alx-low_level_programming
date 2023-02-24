#include "main.h"

/**
 * print_number - this code prints numbers using the _putchar
 * function that only prints one character at a time.
 * this is done first by checking the sign and printing a '-'
 * before negative numbers. Then what is done is setting
 * a count variable used to check if a number is in the tenth,
 * hundredth, thousandth ... etc pile and handle it accordingly.
 *
 * @n: the number to be printed
 *
 * Return: there is no return here it's void
 */
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + '0');
	}
}
