#include "main.h"
/**
 * _strstr - ocates a substring.
 * @haystack: string
 * @needle: substring
 * Return: ponter if located
 * NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
