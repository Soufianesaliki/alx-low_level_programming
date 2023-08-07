#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first srtring
 * @s2: second string
 * Return:	newly allocated space in memory has s1 & s2
 *		NULL if failed or s1 & s2 empty
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int sz_str1 = 0, sz_str2 = 1;
	char *new_str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);
	for (i = 0; s1[i]; i++)
		sz_str1++;
	for (i = 0; s2[i]; i++)
		sz_str2++;
	new_str = (char *)malloc(sizeof(char) * (sz_str1 + sz_str2));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
