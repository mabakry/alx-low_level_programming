#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculate sum of all the data (n) of a list
 * @head: list head
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
