#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: input
 * Return: factorial if Success
 * -1 if error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
