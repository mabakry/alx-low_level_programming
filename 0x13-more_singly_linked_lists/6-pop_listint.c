#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to list head.
 * Return: head data or 0 if node is empty.
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
