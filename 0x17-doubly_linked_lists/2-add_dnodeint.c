#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a list
 * @head: list head
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = new;
		new->next = temp;
		*head = new;
		return (new);
	}
}
