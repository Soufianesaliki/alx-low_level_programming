#include "main.h"

/**
 * natural - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024
 * Return: nothing
 */

void natural(void)
{
	int i, sum = 0;

	for (i = n - 1024; i >= 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
