#include "main.h"

/**
 * prints_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
        {
	    _putchar(letter);
	    letter++;
        }
      _putchar('\n');
}
