#include "main.h"

/**
 * _strcat - concarnates two strings
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n])
		n++;
	
	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		x += 1;
	}
	dest[x] = '\0';

	return (dest);
}
