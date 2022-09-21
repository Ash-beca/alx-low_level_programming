#include "main.h"

/**
 * _strncat - concarnates two strings
 * @dest: destination char
 * @n: number of bytes from src
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (i - 0; i < n && src[i] != '\0'; i++)
		dest[x + i] = src[x];
	dest[x + i] = '\0';

	return (dest);
}
