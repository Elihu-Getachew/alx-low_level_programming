#include "main.h"

/**
 * print_last_digit - takes in a certain number and
 * returns the last digit of that number
 *
 * @n: takes the input in integer form
 *
 * Return: the calculated last value result
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
