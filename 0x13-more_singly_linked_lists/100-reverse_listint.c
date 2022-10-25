#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses the listint_t linked list
 * @head: first element
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *p;

	n = NULL;
	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->n;
		(*head)->n = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
