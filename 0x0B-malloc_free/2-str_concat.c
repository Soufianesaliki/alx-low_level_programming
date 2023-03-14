#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1:string
 * @s2:string
 * Return:string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1 = 0, len2 = 0;
	char *pt;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL)
		{
			for (i = 0; s1[i]; i++)
				len1++;
		}
		if (s2 != NULL)
		{
			for (i = 0; s2[i]; i++)
				len2++;
		}
		i = 0;
		len = len1 + len2;
		pt = malloc(len + 1);
		while (s1[i])
		{
			pt[i] = s1[i];
			i++;
		}
		i = 0;
		j = len1 + 1;
		while (s2[i])
		{
			pt[j] = s2[i];
			i++;
			j++;
		}
		pt[len + 1] = '\0';
	}
	return (pt);
}
