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
	unsigned int i, len;
	listint_t *tmp, *prev, *newNode;

	if (*head == NULL || head == NULL)
		return (NULL);
	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	tmp = *head;
	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;
	tmp = *head;
	prev = NULL;
	for (i = 0; i <= len; i++)
	{
		if (i == idx)
		{
			if (prev == NULL)
			{
				*head = newNode;
				newNode->next = tmp;
			}
			else
			{
				newNode->next = tmp;
				prev->next = newNode;
			}
			return (newNode);
		}
		if (tmp == NULL)
			return (NULL);
		prev = tmp;
		tmp = tmp->next;
	}
	return (NULL);
}
