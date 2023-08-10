#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return:	array
 *		NULL if min > max or failed
 */

int *array_range(int min, int max)
{
	int i, n;
	int *array;

	if (min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0, n = min; n <= max; i++, n++)
		array[i] = n;
	return (array);
}
