#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
