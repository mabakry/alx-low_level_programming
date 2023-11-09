#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index
 * @head: list head
 * @index: index of node to be deleted
 * Return:  if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *before, *after;
	unsigned int i;

	if (!*head)
		return (-1);
	while (temp->prev)
		temp = temp->prev;
	if (index == 0)
	{
		if (temp->next)
		{
			after = temp->next;
			after->prev = NULL;
			free(temp);
			*head = after;
			return (1);
		}
		else
		{
			free(temp);
			*head = NULL;
			return (1);
		}
	}
	for (i = 0; i < index; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	before = temp->prev;
	after = temp->next;
	before->next = after;
	after->prev = before;
	free(temp);
	while (before->prev)
		before = before->prev;
	*head = before;
	return (1);
}
