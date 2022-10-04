#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: argument
 * Return: argument
 */

char *_strdup(char *str)
{
	int size;
	static char *dup;
	char *len;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		dup++;

	dup = (char *) malloc(sizeof(char) * size + 1);

	if (dup == NULL)
		return ((char *) NULL);

	len = dup;
	while (*str)
	{
		*len = *str;
		len++;
		str++;
	}
	*len = '\0';

	return (dup);
}
