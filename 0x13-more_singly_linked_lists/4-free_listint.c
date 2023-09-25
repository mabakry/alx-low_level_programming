#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
