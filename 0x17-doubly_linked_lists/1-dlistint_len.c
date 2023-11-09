#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: list
 * Return: list length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
