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
	listint_t *tmp, *prev, *newNode;

	if (*head == NULL || head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		tmp = *head;
		*head = newNode;
		newNode->next = tmp;
		return (newNode);
	}
	tmp = *head;
	while (idx > i)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
		tmp->next = newNode;
	else
	{
		newNode->next = tmp;
		prev->next = newNode;
	}
	return (newNode);
}
