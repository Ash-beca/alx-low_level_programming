#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s string
 * Return: integer
 */

int _atoi(char *s)
{
	int c = o;
	unsigned int ni = 0;
	int min = 1;
	int sis = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}

