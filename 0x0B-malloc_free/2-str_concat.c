#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: frist string
 * @s2: second string
 * Return: 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	{
		y = y + 1;
	}

	concat = malloc(sizeof(char) * y);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i = i + 1)
		concat[x++] = s1[i];

	for (i = 0; s2[i]; i = i + 1)
		concat[x++] = s2[i];

	return (concat);
}
