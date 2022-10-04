#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a twon dementional array of integers
 * @width: width of arrays
 * @height: height of arrays
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = (int**) malloc(sizeof(int*) * width);

	if (grid[i] != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *) malloc(sizeof(int) * width);

			if  (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			}
			else
			{ 
				while (i >= 0)
				{
					free(grid[i]);
					i--;
				}
				free (grid);
				return (NULL);
			}
		}
		return (grid);
	}
	else 
		return (NULL);
}
