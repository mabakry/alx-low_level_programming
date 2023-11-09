#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index
 * @head: list head
 * @index: index of node to be deleted
 * Return:  if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
			free(temp);
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
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
