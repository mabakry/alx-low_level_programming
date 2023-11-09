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
	dlistint_t *temp = *h, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	/*temp->next->prev = new;*/
	temp->next = new;

	return (new);
}
