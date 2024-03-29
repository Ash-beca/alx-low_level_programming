#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the results followed by a new line
 * @argv: contailns the program command line in arguments
 * @argc: contains the number of line arguments
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
		if (!isdigit(argv[a][b]))
		{
		printf("Error\n");
		return (1);
		}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
