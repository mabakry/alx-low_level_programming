#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
