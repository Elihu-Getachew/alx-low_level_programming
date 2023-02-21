#include "main.h"

/**
 * print_sign - checks the sign of a certain number and
 * prints its sign as well as 0 if it is 0
 *
 * @n: the function print_sign takes a parameter
 * of type int which it then processeses
 *
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
