#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
