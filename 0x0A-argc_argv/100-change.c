#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: arg nu
 * @argv: arg value
 * Return: 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int i, res, j;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	res = 0;
		if (1 < 0)
		{
			printf("0\n");
			return (0);
		}
	for (j = 0; j < 5; j++)
	{
		while (i >= coins[j])
		{
			res++;
			i -= coins[j];
		}
	}
	printf("%d\n", res);
	return (0);
}
