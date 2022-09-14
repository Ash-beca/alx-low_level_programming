#include "main.h"

/**
 * int _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Returns: 1 if c is a letter, lowercase or uppercase
 * otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
