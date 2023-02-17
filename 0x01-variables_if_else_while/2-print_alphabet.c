#include <stdio.h>

/**
 * main - program that prints the letter
 * in lowercase followed by a new line
 * at the end
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l != '{')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
