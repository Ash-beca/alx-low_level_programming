#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: position
 * @n: new node
 * Return: address of new node or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *end = *h;
    
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (end == NULL)
			return (NULL);
		end = end->next;
	}

	if (end->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = end->next;
	end->next->prev = new;
	end->next = new;
	new->prev = end;
	return (new);
}