#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -  allocates memory
 * @b: size
 * Return: pointer if Success 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
