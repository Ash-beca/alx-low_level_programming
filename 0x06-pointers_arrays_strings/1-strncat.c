#include "main.h"

/**
 * _strncat - concarnates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
