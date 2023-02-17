#include <stdio.h>

/**
 * main - this program prints the alphabet in
 * lower case then upper case ending by a new
 * line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pr = 'a';

	while (pr != '{')
	{
		putchar(pr);
		pr++;
	}
	pr = 'A';
	while (pr != '[')
	{
		putchar(pr);
		pr++;
	}
	putchar('\n');

	return (0);
}
