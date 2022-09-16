#include "main.h"

/**
 * print_numbers - prints the number from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int a = '0'; 
	
	while(a <= '9')
	{
		_puthcar (a + '0');
		a++;
	}
	_putchar ('\n');

}
