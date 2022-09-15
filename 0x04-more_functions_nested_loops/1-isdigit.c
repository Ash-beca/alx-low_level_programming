#include "main.h"

/**
 * _isdigit - checks if is a digit
 *@c: parameter
 * Return: 1
 */

int _isdigit(int c);
{
	char digit;

	int num = 0;

	for (digit = '0'; digit <= '9'; digit = digit++)
	{
		if (digit == c)
		{
			num = 1;
		}
		else
		{
			return (num);
		}
	}
}
