#include "main.h"


	/**
	 * print_sign - Determines if the input number.
	 *
	 * @n: the input number as an intger.
	 *
	 * Return: 1 is greater than zero.
	 * 0 is zero.
	 *  -1 is less than zero.
	 */
int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}
