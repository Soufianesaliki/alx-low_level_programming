#include "lists.h"

/**
 * free_list - frees all the elements of a list_t list
 * @head: pointer to a list variable
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *tmp = head;

	if (head)
	{
		while (head->next != NULL)
		{
			printf("1, ");
			head = head->next;
			free(tmp->str);
			free(tmp->next);
			free(tmp);
			tmp = head;
		}
	free(head->next);
	free(head->str);
	free(head);
	free(tmp);
	}
}
