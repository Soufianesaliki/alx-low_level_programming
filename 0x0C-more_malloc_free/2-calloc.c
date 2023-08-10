#include "main.h"

/**
 * _calloc - create calloc using malloc
 * @size: unsigned int
 * @nmemb: unsigned int
 * Return:
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}
