#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: address of where the node of the lopp starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (head != NULL)
	{
		if (slow == fast)
		{
			while (head != NULL)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
		slow = slow->next;
		fast = fast->next->next;
	}
}
