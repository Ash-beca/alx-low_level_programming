#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	char i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
