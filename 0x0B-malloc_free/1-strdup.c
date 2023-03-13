#include "main.h"

/**
 * _strdup - returns a pointer to a new space of a copy string
 * @str:string
 * Return:string
 */

char *_strdup(char *str)
{
	int len, i;
	char *pt;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = _strlen(str);
		pt = malloc(len);
		if (pt == NULL)
			return (NULL);
		for (i = 0; i < len + 1; i++)
		{
			pt[i] = str[i];
		}
	}
	return (pt);	
}
