#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - calculates the number of elements in a linked list.
 * @h: list
 * Return:  the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
