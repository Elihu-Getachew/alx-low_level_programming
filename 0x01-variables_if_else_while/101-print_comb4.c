#include <stdio.h>

/**
 * main - function used to print a combination of three digit
 * numbers separated by a comma and a space afterwards,
 * no any number combinations can be repeated even in
 * different configurations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 7)
	{
		int x = n + 1;

		while (x <= 8)
		{
			int y = x + 1;

			while (y <= 9)
			{
				putchar(n + '0');
				putchar(x + '0');
				putchar(y + '0');
				if (n != 7 || x != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			x++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
