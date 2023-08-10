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
	unsigned int i, limit;
	char *new_ptr;

	if (new_size != 0)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		if (ptr == NULL)
			return (new_ptr);
		if (new_size == old_size)
			return (ptr);
		else if (new_size < old_size)
			limit = new_size;
		else
			limit = old_size;
		for (i = 0; i < limit; i++)
			new_ptr[i] = *((char *)ptr + i);
		free(ptr);
		return (new_ptr);
	}
	if (ptr != NULL)
		free(ptr);
	return (NULL);
}
