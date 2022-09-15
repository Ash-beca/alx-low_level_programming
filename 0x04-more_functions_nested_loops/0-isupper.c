#include "main.h"

/**
 * _isupper - check if ti is uppercase with a value of 1
 * @c: integer c
 * Return: 1, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
