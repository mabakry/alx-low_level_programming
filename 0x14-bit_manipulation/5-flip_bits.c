#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return:  number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		if ((1 & n >> i) != (1 & m >> i))
			count++;
	}
	return (count);
}
