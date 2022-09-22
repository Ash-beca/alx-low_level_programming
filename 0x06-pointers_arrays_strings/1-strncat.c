#include "main.h"
#include <string.h>

/**
 * _strncat - concarnates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int y = 0;

	while (dest[i++])
		y++;

	for (i = 0; src[i] && i < n; i++)
		dest[y++] = src[i];

	return (dest);
}
