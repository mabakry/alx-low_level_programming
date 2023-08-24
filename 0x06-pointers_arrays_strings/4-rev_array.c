#include "main.h"
/**
 * reverse_array - everses the content of an array
 * @a: input array
 * @n: array size
 */
void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
