#include <stdio.h>

/**
 * main - prints all possible combinationsof single-digit numbers
 * numbers must be separated by ,, followed by space
 * numbers should be printed in ascending order
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
