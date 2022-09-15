#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: character is checked for uppercase
 *
 * Return: 1 if c is uppercase, otherwise o
 */

int _isupper (int c)
{
	char b;

	int upper_alphs = 0;
	for (b = 'A'; b <= 'Z'; b = b +=)
	{
		if ( b == c)
		{
			upper_alphs = 1;
		}
	}
	return (upper_alphs);
}
