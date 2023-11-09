#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
