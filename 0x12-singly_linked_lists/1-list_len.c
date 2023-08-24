#include "lists.h"

/**
 * list_len - counts number of elements in a linked list_t list
 * @h: constanst pointer to a list variable
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}
