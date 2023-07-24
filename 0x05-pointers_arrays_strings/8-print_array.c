#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line
 * @n: number of elements
 * @a: pointer to array of integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
