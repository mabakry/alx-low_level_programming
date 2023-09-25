#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a list
 * @head: list head
 * @index:  index of the node.
 * Return: index node data or NULL if not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *temp = head;

	for (x = 0; x < index; x++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
