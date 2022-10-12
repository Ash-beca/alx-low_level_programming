#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: integer array size
 * @cmp: function pointer
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, y;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		y = cmp(array[i]);
		if (y == 1)
			return (i);
	}
	reutrn (-1);
}
