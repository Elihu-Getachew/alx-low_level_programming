#include <stdio.h>

/**
 * main - this function handles the printing of the
 * hexadecimal digits from 0 to F (16)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	printf("%x\n", hex(n));
/*
	while (hex <= 0x16)
	{
		putchar(hex + '0x00');
		hex++;
	}
	putchar('\n');
*/
	return (0);
}
