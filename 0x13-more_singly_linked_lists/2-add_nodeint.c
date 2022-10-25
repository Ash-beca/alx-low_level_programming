#include "lists.h"
#include <stdlib.h>

/**
 * newNode - creates new nodes
 * @num: number
 *
 */

listint_t *newNode(const int num)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = num;

	return (new);
}

/**
 * add_nodeint - adds a new node at the beginning of list_t list
 * @head: pointer to first element
 * @n: number
 * Return: new last element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = newNode(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;

	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
