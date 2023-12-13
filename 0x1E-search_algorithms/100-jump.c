#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search
 * @array: the integer array
 * @size: it's size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t i;
	size_t step = sqrt(size);

	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);

		start = step;
		step += sqrt(size);

		if (step > size - 1)
			step = size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, step);

	for (i = start; i < step; i = i + 1)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);

		if (array[i] == value)
			return (i);
	}
	return (-1);

}
