#include "main.h"

/**
 * main - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 * Return: nothing
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1024 - 1; i >= 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
