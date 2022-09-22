#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: string
 * Return: string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (upper[i] != '\0'; i++)
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
			upper[i] = upper[i] - 95;
		}
	}
	return (upper);
}
