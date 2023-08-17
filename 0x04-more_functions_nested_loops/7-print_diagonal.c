#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: the number of times the character
 * should be printed
 */
void print_diagonal(int n)
{
int i, j;

for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}

