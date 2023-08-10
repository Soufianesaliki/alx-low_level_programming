#include "main.h"

/**
 * _realloc - creates and frees a memory block
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return:	Void pointer
 *		NULL if ptr != NULL and new_size = 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int unsigned i, limit;
	char *new_ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		limit = old_size;
	else
		limit = new_size;
	for (i = 0; i < limit; i++)
		new_ptr[i] = *((char *)ptr + i);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (new_ptr);
	free(ptr);
	if (new_size == 0)
		return (NULL);
	return (new_ptr);
}	
