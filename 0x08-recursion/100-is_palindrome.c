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
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if palindrome - 0 if not
 */
int is_palindrome(char *s)
{
	int n = len(s);

	if (*s != '\0')
	{
		if (*s != s[n])
		{
			return (0);
		}
		n--;
		is_palindrome(s + 1);
	}
	return (1);
}
