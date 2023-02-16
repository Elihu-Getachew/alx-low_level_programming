#include <unistd.h>

/**
 * main - here the program prints to stderr
 * without using printf and put and their
 * variants
 *
 * Return: 1 in this case since we are printing
 * to the stderr and it should return 1 as
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
