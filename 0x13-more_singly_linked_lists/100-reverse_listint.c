#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses the listint_t linked list
 * @head: first element
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *p;

	next = NULL;
	p = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;
	return (*head);
}
