#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: constant pointer to a list
 * Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (*head == NULL || !head)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	next = *head;
	prev = NULL;
	while (*head != NULL)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
