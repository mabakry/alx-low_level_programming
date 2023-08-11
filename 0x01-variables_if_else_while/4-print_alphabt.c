#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' && ch != 'q' && ch != 'e'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
