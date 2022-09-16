#include "main.h"

/*
 * print_diagonal - prints lines in a diagonal view
 * @n: diagonal parameter
 * Description: print_diagonal prints lines in diagonal view
 * Return: diagonal
 */

void print_diagonal(int n)i
{
	int x, i;

	if (n > 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar('');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
