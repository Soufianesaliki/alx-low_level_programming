#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of second string
 * Return:	new pointer contains s1 and s2
 *		NULL if faild
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int sz, sz1 = 0, sz2 = 0;
	char *concat;

	for (i = 0; s1[i]; i++)
		sz1++;
	for (i = 0; s2[i]; i++)
		sz2++;
	if (n < sz2)
		sz2 = n;
	sz = sz1 + sz2;
	concat = (char *)malloc(sizeof(char) * (sz + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
		concat[i] = s1[i];
	for (j = 0; j < sz2; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
