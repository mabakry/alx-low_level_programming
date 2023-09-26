#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * looped_list - returns number of exactly nodes without loop in a list
 * @head: list head.
 * Return: number of nodes or 0 if not looped
 */

size_t looped_list(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *T, *R;

	if (head == NULL || head->next == NULL)
		return (0);

	T = head->next;
	R = (head->next)->next;

	while (R)
	{
		if (T == R)
		{
			T = head;
			while (T != R)
			{
				nodes++;
				T = T->next;
				R = R->next;
			}

			T = T->next;
			while (T != R)
			{
				nodes++;
				T = T->next;
			}
			return (nodes);
		}

		T = T->next;
		R = (R->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - rints a list
 * @head: list head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, x = 0;
	const listint_t *temp;

	if (head == NULL)
		exit(98);

	temp = head;
	nodes = looped_list(head);
	if (nodes == 0)
	{

		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			nodes++;
			temp = temp->next;
		}
	}
	else
	{
		for (x = 0; x < nodes; x++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}
		printf("-> [%p] %d\n", (void *)temp, temp->n);
	}
	return (nodes);
}
