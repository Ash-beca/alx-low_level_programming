#include "main.h"

/**
 * main - prints the number from 0 to 9, followed by a new line
 *
 * Return: void
 */

int main(void)
{
	int a = '0'; 
	{
		while(a >= '9')
		{
			_puthcar (a);
			a++;
		}
		_putchar ('\n');
	}

}
