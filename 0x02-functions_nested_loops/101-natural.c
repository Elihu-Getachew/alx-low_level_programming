#include <stdio.h>

/**
 * main - where we print the sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);

	return (0);
}
