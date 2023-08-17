#include "lists.h"

/**
 * print_dlistint - prints doubly linked list and count its elements
 * @h: list
 *Return: Count of the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}