#include "main.h"
#include <stddef.h>
/**
 * _strch - locates a character in a string.
 * @s: string
 * @c: char
 * Return: s if locted
 * NULL if not
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
