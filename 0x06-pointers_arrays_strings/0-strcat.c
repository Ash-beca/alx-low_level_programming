#include "main.h"

/**
 * _strcat - concarnates two strings
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int y = 0;

	while (dest[i++])
		y++;
	for (i = 0; src[i]; i++)
		dest[y++] = src[i];

	return (dest);
}
