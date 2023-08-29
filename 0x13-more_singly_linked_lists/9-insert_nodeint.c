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
	listint_t *tmp, *newNode;

	if (*head == NULL || head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp = (*head);
		*head = newNode;
		newNode->next = tmp;
		newNode->n = n;
		return (newNode);
	}
	tmp = *head;
	while (idx - 1 > i)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	newNode->n = n;
	return (newNode);
}
