#include "main.h"

/**
 * prime_check - checks if the number is prime
 * @f: factor
 * @p: possible prime number
 * Return: 1 if prime
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: prime number
 * Return: 1 if
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
