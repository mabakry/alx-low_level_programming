#include "main.h"
/**
 * _strlen_recursion -  length of a string.
 * @s: string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
	return (len + _strlen_recursion(s + 1));
	}
return (0);
}
