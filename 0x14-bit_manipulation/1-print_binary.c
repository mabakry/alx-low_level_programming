#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: given number
 */

void print_binary(unsigned long int n)
{
	int size, i, x = 0;

	size = 8 * sizeof(n);
	for (i = (size - 1); i >= 0; i--)
	{
		if (1 & (n >> i))
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
