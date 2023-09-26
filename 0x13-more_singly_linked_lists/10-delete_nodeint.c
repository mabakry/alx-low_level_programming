#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a list
 * @head: pointer to list head
 * @index: index of node to be deleted
 * Return: 1 if success -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0, x;
	listint_t *temp, *prev = *head, *len = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	while (len)
	{
		count++;
		len = len->next;
	}

	if (index > count)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (x = 1; x < index; x++)
		prev = prev->next;

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
