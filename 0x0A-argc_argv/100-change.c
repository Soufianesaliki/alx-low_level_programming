#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of args
 * @argv: list of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, money, cents = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc > 3 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	money = atoi(argv[1]);
	while (money)
	{
		for (j = 0; j < 5; j++)
		{
			while (money >= change[j])
			{
				cents++;
				money -= change[j];
			}
		}
	}
	printf("%d\n", cents);
	return (0);
}
