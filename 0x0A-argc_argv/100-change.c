#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minum number of coins to make change for an amount of money.
 * @argv: contains the program comman line arguments
 * @argc: contains the number of comman line arguments.
 * Return: 0 -  success
 */

int main(inr argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	print("%d\n", coins);
	return (0);
}
