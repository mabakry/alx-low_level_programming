#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list head
 * @idx: position to add node
 * @n: new node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
