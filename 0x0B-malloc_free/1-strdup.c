#include "main.h"

/** _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return:	pointer to a new string
 * 		NULL if failed or str = NULL
 */

char *_strdup(char *str)
{
	int i, size_str = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		size_str++;
	new_str = (char *)malloc(sizeof(char) * size_str);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < size_str; i++)
		new_str[i] = str[i];
	return (new_str);
}
