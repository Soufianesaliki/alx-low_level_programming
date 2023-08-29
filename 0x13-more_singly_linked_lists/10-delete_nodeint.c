#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * head: pointer to list
 * index: position of node
 * Return:	1 is seccess
 *		-1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *tmp = *head;

	if (!head || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i <= index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (!tmp)
		return (-1);
	prev->next = tmp->next;
	free(tmp);
	return (1);
}

