#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a list variable
 * @str: constanst string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	if (*head == NULL)
	{
		*head = (list_t *)malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		(*head)->str = (char *)malloc(sizeof(char) * strlen(str));
		if ((*head)->str == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
	}
	else
		add_node_end(&((*head)->next), str);
	return (*head);
}
