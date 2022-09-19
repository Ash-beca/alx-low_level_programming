#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	max = i;
	j = max / 2;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j <= max)
	{
		_puthcar(str[j]);
		j++;
	}
	_putchar('\n');
}	
