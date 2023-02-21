#include <stdio.h>

/**
 * print_to_98 - basically prints values from a certain n
 * to 98, whether it is backwards or forwards and with a
 * comma and space in between
 *
 * @n: starting number
 *
 * Return: void or no return
 */
void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	else if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);

	printf("%d\n", n);
}
