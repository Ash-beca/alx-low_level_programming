#include <stdio.h>

/**
 * main - prints all possible different combinations of twom digits
 * numbers must be separated by ,, followed by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; n++)
		{
		    if (m  > n)
		    {
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar (',');
				putchar(' ');
			}
		   }
		}
	}
	putchar('\n');
	return (0);
}
