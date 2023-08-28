#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to a list
 * Return: n of the deleted node
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL || head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
