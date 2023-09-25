#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *t;

	if (h == NULL)
		return (0);

	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		count++;
		t = t->next;
	}
	return (count);
}
