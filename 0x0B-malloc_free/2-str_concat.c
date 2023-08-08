#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, sz1, sz2, sz;
	char *new_str;

	sz1 = sz2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			sz1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			sz2++;
	}
	sz = sz1 + sz2;
	new_str = (char *)malloc(sizeof(char) * (sz + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < sz2; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';
	return (new_str);
}

