#include "list.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 *  @h: pointer to first element of list
 *  Return: length of list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		++size;
	}
	return (size);

}
