#include <stdio.h>

/**
 * main -prints the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	long int sum, first, second, count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (sum < 97)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%li\n", sum);

	return (0);
}
