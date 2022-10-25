#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first element
 * @index: element number
 * Return: a node 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (index == n)
			return (head);
		head = head->next;
		n++;
	}

	return (NULL);
}

