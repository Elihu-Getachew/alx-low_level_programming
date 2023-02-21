#include "main.h"

/**
 * _isalpha - checks if a certain character is
 * as alphabet or not
 *
 * @c: the function _islower takes a parameter
 * of type int which it then uses in its comparison
 *
 * Return: 1 for letters of the alphabet
 * 0 for results otherwise
 */
int _isalpha(int c)
{
	if (97 <= c && 122 >= c || 65 <= c && 90 >= c)
		return (1);
	else
		return (0);
}
