#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a list
 * @n: const int
 * Return:      address of the new element
 *              or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *next = NULL;

	if (*head != NULL)
		next = *head;
	*head = (listint_t *)malloc(sizeof(listint_t));
		if (*head == NULL)
		return (NULL);
	(*head)->next = next;
	(*head)->n = n;
	return (*head);
}
