#include "main.h"

/**
 * prints_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++);
        {
	    _putchar(letter);
	    letter++;
        }
      _putchar('\n');
}
