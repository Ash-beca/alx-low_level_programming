#include "main.h"

/**
 * int print_last_digit - prints the last digit of a number
 * @n: n is an interger
 * Description: prints the last digit of a number
 * Reurn: interger
 */

int print_last_digit(int)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
