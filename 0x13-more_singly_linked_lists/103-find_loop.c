#include <stdlib.h>
#include "lists.h"

/**
 * *find_listint_loop -  finds the loop in a linked list
 * @head: list head
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *T = head, *R = head;

	if (head == NULL)
		return (NULL);

	while (R && T && R->next)
	{
		T = T->next;
		R = R->next->next;

		if (T == R)
		{
			T = head;
			while (T != R)
			{
				T = T->next;
				R = R->next;
			}
			return (T);
		}
	}
	return (NULL);
}
