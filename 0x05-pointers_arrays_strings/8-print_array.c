#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, count;

	i = 0;
	count = 1;

	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && count < n)
		{
			print("%d, ", a[i]);
			i++;
			count++;
		}
		printf("%d\n", a[i]);
	}
}
