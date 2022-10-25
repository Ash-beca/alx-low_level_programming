#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - free a struct linked list
 * @head: first element
 * Return: frees a list_t list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
