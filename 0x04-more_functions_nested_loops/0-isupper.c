#include "main.h"

/**
 * _isupper - checks if a certain character is
 * given in upper case or not
 *
 * @c: the function _isupper takes a parameter
 * of type int which it then uses in its comparison
 *
 * Return: 1 for upper case
 * 0 for reults otherwise
 */
int _isupper(int c)
{
	if (65 <= c && 90 >= c)
		return (1);
	else
		return (0);
}
