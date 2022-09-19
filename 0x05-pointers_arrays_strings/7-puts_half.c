#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, y;
	
	i = strlen(str);

	if (i % 2 == 1)
	{
		j = i / 2 + 1;
	}
	else
	{
		j = i / 2;
	}
	for (y = j; y < i; y++)
		_putchar (str[y]);
	_putchar('\n');
}
