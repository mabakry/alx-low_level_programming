#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list
 * @head: list
 * @str: new node
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->next = *head;
	n->len = len;
	*head = n;
	return (n);
}
