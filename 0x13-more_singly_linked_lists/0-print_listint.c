#include "lists.h"

/**
 * print_listint - prints all the element of a listint_t list
 * @h: list to search
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s;

	s = 0;
	while (h != NULL)
	{
		s++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
