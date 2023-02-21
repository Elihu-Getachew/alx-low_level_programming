#include <stdio.h>
#define MAXSTRING 8
/**
 * main - the aim of this function is
 * to print the string putchar
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char var[] = "_putchar";
	int count = 0;

	while (count < MAXSTRING)
	{
		putchar(var[count]);
		count++;
	}
	putchar('\n');

	return (0);
}
