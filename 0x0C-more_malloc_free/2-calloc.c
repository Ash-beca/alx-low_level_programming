#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory
 * @size: size of memory
 * Return:pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	void *arr;
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	c = arr;
	for (i = 0; i < nmemb * size; i++)
	       c[i] = 0;
	return (arr);
}
