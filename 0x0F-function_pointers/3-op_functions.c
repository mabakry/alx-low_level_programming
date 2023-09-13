#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add -  returns the sum of a and b
 * @a: variable
 * @b: variable
 * Return: sum
 */
int op_add(int a, int b)
{
if (!a || !b)
return (0);
return (a + b);
}
/**
 * op_sub - eturns the difference of a and b
 * @a: variable
 * @b: variable
 * Return: difference
 */
int op_sub(int a, int b)
{
if (!a || !b)
return (0);
return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: variable
 * @b: variable
 * Return: result
 */
int op_mul(int a, int b)
{
if (!a || !b)
return (0);
return (a * b);
}
/**
 * op_div -  returns the result of the division of a by b
 *  * @a: variable
 * @b: variable
 * Return: result
 */
int op_div(int a, int b)
{
if (!a || !b)
return (0);
return (a / b);
}
/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: variable
 * @b: variable
 * Return: remainder
 */
int op_mod(int a, int b)
{
if (!a || !b)
return (0);
return (a % b);
}
