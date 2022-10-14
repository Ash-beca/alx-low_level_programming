#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: an input string to be printed between numbers
 * @n: number of parameter
 * @...: other parameters
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("%s", s);

		if (separator == NULL)
			continue;

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
