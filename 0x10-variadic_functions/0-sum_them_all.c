#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: counter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list p;

	va_start(p, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(p, unsigned int);
	va_end(p);
	return (sum);
}
