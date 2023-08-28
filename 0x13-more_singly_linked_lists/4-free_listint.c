#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to a list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	if (head)
	{
		if (head->next)
			free(head->next);
		free(head);
	}
}
