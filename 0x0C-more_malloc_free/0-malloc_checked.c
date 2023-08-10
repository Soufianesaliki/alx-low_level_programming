#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
