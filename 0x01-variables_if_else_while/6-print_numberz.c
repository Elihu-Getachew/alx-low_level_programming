#include <stdio.h>

/**
 * main - this program aims to print numbers from
 * 0 to 9 followed by a new line but only using
 * putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n =  0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
