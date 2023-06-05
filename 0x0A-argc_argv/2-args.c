#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: number of command lines
 * @argv: array that contains the program command line
 * Return: 0 - success
 * */

int main(int argc, char *argv[])
{
	int x;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
