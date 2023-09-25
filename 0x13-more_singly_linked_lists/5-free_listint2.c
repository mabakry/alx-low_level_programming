#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  frees a list.
 * @head: pointer to a list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *x = *head;

	if (head == NULL)
		return;

	while (temp)
	{
		temp = x->next;
		free(x);
		x = temp;
	}
	*head = NULL;
}
