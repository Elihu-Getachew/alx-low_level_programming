#include <stdio.h>

/**
 * main - function used to print numbers separated
 * by a comma and a space afterwards, in the range
 * 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		n++;
	}

	return (0);
}
