#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first element
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}

