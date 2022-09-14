#include "main.h"

/**
 * prints_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	while (letter <= 'z')
	{
	    _putchar(letter);
	    letter++;
	}
	_putchar('\n');
}
