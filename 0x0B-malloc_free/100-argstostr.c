#include "main.h"
#include <stdlib.h>

/**
 * argstostr - prints args
 * @ac: width of grid
 * @av: height of grid
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		y = 0;

		while (av[x][y] != '\0')
		{
			count++;
			y++;
		}
		x++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
		{
			for (y = 0; av[x][y] != '\0'; y++)
			{
				str[z] = av[x][y];
				z++;
			}
			str[z] = '\n';
			z++;
		}
		return (str);
}
