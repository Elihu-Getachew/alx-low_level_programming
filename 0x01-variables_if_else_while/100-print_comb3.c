#include <stdio.h>

/**
 * main - function used to print a combination of two digit
 * numbers separated by a comma and a space afterwards,
 * no two combinations can be repeated
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 8)
	{
		int x = n + 1;

		while (x <= 9)
		{
			putchar(n + '0');
			putchar(x + '0');

			if (n != 8 || x != 9)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
