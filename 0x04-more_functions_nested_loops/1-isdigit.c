#include "main.h"

/**
 * _isdigit - checks if is a digit
 *@c: parameter
 * Return: 1
 */

int _isdigit(int c);
{
	char ch;

	int num = 0;

	for (ch = '0'; ch <= '9'; ch = ch++)
	{
		if (ch == c)
		{
			num = 1;
		}
	}

	return (num)
	
}
