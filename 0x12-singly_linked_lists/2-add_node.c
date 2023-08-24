#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: constanst pointer to a list variable
 * @str: constanst string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = *head;

	if (str == NULL)
		return (NULL);
	*head = (list_t *)malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->str = (char *)malloc(sizeof(char) * strlen(str));
	if ((*head)->str == NULL)
		return (NULL);
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = tmp;
	return (*head);
}
