#include "main.h"
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: pointer
 */

int main (int argc, char **argv)
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);

		return (0);
	}
}
