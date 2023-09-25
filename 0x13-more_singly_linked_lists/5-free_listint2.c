#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  frees a list.
 * @head: pointer to a list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
