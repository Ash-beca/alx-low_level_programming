#include "search_algos.h"
/**
 * linear_search - performs linear search
 * @array:  is a pointer to the first element of the array
 * @size: its size
 * @value: value to search for
 * Return: the index found or -1 if no value in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);

	for (; a < size; a = a + 1)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

		if (array[a] == value)
			return (a);
	}

	return (-1);
}
