#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end -  adds a new node at the end of a list
 * @head: list
 * @str: nesw node
 * Return:  address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *n, *tmp = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	while (str[len])
		len++;

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = n;

	return (n);
}
