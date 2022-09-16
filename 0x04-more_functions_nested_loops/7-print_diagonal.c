#include "main.h"

/*
 * print_diagonal - prints diaginal lines
 * @n: diagonal parameter
 * Retur: diagonal
 */

void print_diagonal(void)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i< x; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else{
		_putchar('\n');
	}
}
