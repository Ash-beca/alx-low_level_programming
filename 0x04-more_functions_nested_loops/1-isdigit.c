#include "main.h"

/**
 * _isdigit - checks if is a digit
 * @c: parameter
 * Return: 1 or 0 depending on condtion
 */

int _isdigit(int c);
{
	int x = 0;

	char digit;

	for (digit = '0'; digit <= '9'; digit = digit + 1)
	{
		if (digit == c)
		{
			x = 1;
		}
	}
	return (0);
}
