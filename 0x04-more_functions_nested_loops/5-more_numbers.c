#include "main.h"

/**
 * more_numbers -> printing more numbers
 * Return: values
 */

void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1 = num1 +1)
	{
		if (num2 > 9)
		{
			_putchar(num2 / 10 + '0');
		}
		_putchar(num2 % 10 + '0');
	}
	_putchar('\n'):
}
