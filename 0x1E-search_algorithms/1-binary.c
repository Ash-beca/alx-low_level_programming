#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int mid;
	int high = size - 1;
	size_t i = 0;

	while (low <= high)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

		mid = low + ((high - low) / 2);

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (value < array[mid])
		{
			high = mid - 1;
		}

		else if (value > array[mid])
		{
			low = mid + 1;
		}
	}
	return (-1);
}
