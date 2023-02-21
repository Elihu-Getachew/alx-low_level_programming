#include "main.h"

/**
 * _islower - checks if a certain character is
 * given in lower case or not
 * int c - the function _islower takes a
 * parameter of type int
 *
 * Return: 1 for lower case
 * 0 for reults otherwise
 */
int _islower(int c)
{
	if (97<= c && c <=122)
		return (1);
	else
		return (0);
}
