#include "main.h"
#include <stdlib>

/***
 * malloc_checked - allocates memory using malloc
 * @b: int size of memory
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
