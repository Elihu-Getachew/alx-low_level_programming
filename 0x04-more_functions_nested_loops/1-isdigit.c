#include "main.h"

/**
 * _isdigit - checks if a certain character is
 * a number or not
 *
 * @c: the function _isdigit takes a parameter
 * of type int which it then checks if its a digit or not
 *
 * Return: 1 for digits
 * 0 for reults otherwise
 */
int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	else
		return (0);
}
