#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: given number
 * @index: index
 * Return: the value of the bit at index index
 * or -1 if an error occure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
			return (1);
	else
		return (0);
}
