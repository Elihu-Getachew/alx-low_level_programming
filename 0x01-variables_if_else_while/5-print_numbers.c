#include <stdio.h>

/**
 * main - program to print out the numbers
 * from 0 to 9 and print a new line at
 * the end
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
