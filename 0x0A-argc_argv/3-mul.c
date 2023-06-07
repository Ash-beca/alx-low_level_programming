#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication followed by a new line.
 * @argv: contains the program command line
 * @argc: number of command lines
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	if (argv != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
