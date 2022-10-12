#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: 0/
 */

int main(int argc, char **argv)
{
	int x, y;
	char *s;

	if (argc < 2)
	{
		printf("Error\n");
			exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char*)main;
	for (y = 0; y < x - 1; y++)
		printf("%02hhx ", s[y]);
	printf("%02hhx\n", s[y]);
	return (0);
}
