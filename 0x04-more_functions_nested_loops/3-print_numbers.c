#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9, followed by a new line
 * Return: integers
 */

void print_numbers(void)
{
	int a;

	for ( a = 0; a < 10; a++)
		_puthcar (a + '0');
	_putchar ('\n');

}
