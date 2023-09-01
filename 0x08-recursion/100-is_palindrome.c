#include "main.h"
/**
 * len - lenth string
 * @s: string
 * Return: l
 */
int len(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
	l++;
	l += len(s + 1);
	}
return (l);
}
#include "main.h"
/**
 * chk - check string
 * @s: string
 * @i: iterator
 * @l: string length
 * Return: 1 if if palindrome, 0 if not
 */
int chk(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
			return (0);
	if (i >= l)
			return (1);
	return (chk(s, i + 1, l - 1));
}
#include "main.h"
/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if palindrome - 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (chk(s, 0, len(s)));
}
