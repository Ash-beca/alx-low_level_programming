#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: head of linked list
 * @idx: index inserted
 * @n: integer for inserted node
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new, *p;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	p = *head;
	i = 0;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node != NULL)
	{
		if (i == idx)
		{
			new->next = node;
			p->next = new;
			return (new);
		}
		p = node;
		node = node->next;
		i++;
	}
	if (idx == i)
	{
		p->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
