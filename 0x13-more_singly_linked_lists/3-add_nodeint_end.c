#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a list
 * @n: const int
 * Return:      address of the new element
 *              or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = (listint_t *)malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->next = NULL;
		(*head)->n = n;
	}
	else
		add_nodeint_end(&((*head)->next), n);
	return (*head);
}
