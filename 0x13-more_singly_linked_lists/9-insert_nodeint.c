#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to list head
 * @n: node element
 * @idx: index of the list where the new node should be added
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (x = 1; x < idx; x++)
		temp = temp->next;

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
