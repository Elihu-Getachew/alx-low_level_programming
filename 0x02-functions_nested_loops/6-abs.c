#include "main.h"

/**
 * _abs - checks the sign of a certain number and
 * returns its absolute value as well as 0 if it is 0
 *
 * @n: takes the input in integer form
 *
 * Return: the absolute valued result
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
