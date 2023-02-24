#include <stdio.h>

/**
 * main - this method contains code to print numbers from
 * 1 to 100 with multiples of 3 being replaced by fizz and
 * multiples of 5 being replaced by the word buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 15) == 0)
			printf("FizzBuzz ");
		else if ((n % 3) == 0)
			printf("Fizz ");
		else if ((n % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");

	return (0);
}
