#include <stdio.h>

/**
 * main - program prints the lower case alphabet
 * in reverse starting from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');

	return (0);
}
