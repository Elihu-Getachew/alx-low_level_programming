#include "main.h"

/**
 * print_times_table - Prints a times table starting from 0
 * to a certain number specified by the input n, if
 * the number n is between 0 and 15
 *
 * @n: is the number taken as an input
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, mul;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mul = a * b;
				_putchar(44);
				_putchar(32);
				if (mul <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mul + 48);
				}
				else if (mul <= 99)
				{
					_putchar(32);
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else
				{
					_putchar(((mul / 100) % 10) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
