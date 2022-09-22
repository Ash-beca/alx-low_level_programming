#include "main.h"

/**
 * leet - function thatvencodes a string into 1337
 * @s: string
 * Return: 0
 */

char *leet(char *s)
{
	int i, y;

	char alph[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[i] == alph[y])
			{
				s[i] = num[y];
			}
		}
	}
	
	return (s);
}
