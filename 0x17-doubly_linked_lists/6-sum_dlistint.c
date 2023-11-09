#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data (n) of a list
 * @head: list
 * Return: Sum or 0 if empty list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
