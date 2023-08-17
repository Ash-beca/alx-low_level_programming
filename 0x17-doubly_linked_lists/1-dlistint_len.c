#include "lists.h"

/**
 * add_dnodeint - returns the number of elements in a linked dlistint_t list.
 * @head: list
 * @n: number of element to return
 *
 * Return: address of new node, or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}