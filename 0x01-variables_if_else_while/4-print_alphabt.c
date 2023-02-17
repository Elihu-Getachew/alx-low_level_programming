#include <stdio.h>

/**
 * main - program that prints the letter
 * in lowercase except the letters 'p' and 'q'
 * followed by a new line at the end
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l != '{')
	{
		if (l == 'e' || l == 'q')
		{
			l++; }
		else
		{
			putchar(l);
			l++; }
	}

	putchar('\n');

	return (0);
}
