#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to a list
 * Return:      sum of all the data (n)
 *              or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
