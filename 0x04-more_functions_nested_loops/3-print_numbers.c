#include "main.h"

/**
 * main - prints the number from 0 to 9, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int a = '0'; 
	{
		while(a <= '9')
		{
			_puthcar (a);
			a++;
		}
		_putchar ('\n');

		return (0);
	}

}
