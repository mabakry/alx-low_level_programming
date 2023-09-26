#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe -  frees a list
 * @h: pointer to list head
 * Return:  size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;
	int dif;

	if (*h == NULL || h == NULL)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
