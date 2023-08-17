#include "lists.h"

/**
 * sum_dlistint -  returns the sum of a dlistint_t linked list
 * @head: The pointer to head of the list
 * Return: sum of data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}