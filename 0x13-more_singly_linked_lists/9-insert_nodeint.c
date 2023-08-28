#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a list
 * @idx: inserting position of the node
 * @n: value of the node
 * Return:      the address of the new node
 *              or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *newNode, *prev;

	while (i < idx)
	{
		if (tmp == NULL)
			return (NULL);
		if (i == idx - 1)
			prev = tmp;
		tmp = tmp->next;
		i++;
	}
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	prev->next = newNode;
	newNode->next = tmp;
	newNode->n = n;
	return (newNode);
}
