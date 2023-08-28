#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets the head to NULL
 * @head: pointer to a list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		if ((*head)->next)
			*head = (*head)->next;
		else
			*head = NULL;
		free(tmp);
	}
}
