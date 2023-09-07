#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: sec string
 * @n: bytes of s2
 * Return: pinter if success NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *p;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	       p[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
	       p[i++] = s2[j++];

	p[i] = '\0';
	return (p);
}