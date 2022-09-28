#include "main.h"
/**
 * check_int - checks integers as candidates for square root
 * @square: squared integer
 * @x: integer
 * Return: 1 if
 */

int check_int(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_int(square, x - 1));
	else if (x < square / x)
		return (check_int(square, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: pointer
 */

int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, start));
}
