#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index in dlistint_t list
 * @head: list
 * @index: position of node to delete
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *end = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = end->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(end);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (end == NULL)
			return (-1);
		end = end->next;
	}

	end->prev->next = end->next;
	if (end->next != NULL)
		end->next->prev = end->prev;
	free(end);
	return (1);
}