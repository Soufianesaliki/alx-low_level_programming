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

	if (*s1)
		for (i = 0; s1[i]; i++)
			sz1++;
	printf("sz1 = %d\n", sz1);
	if (*s2)
		for (i = 0; s2[i]; i++)
			sz2++;
	printf("sz2 = %d\n", sz2);
	if (n < sz2)
		sz2 = n;
	printf("sz2 after n = %d\tn = %d\n", sz2, n);
	sz = sz1 + sz2;
	printf("sz = %d\n", sz);
	concat = (char *)malloc(sizeof(char) * (sz + 1));
	if (concat == NULL)
	{
		printf("failed\n");
		return (NULL);
	}
	for (i = 0; i < sz1; i++)
	{
		concat[i] = s1[i];
		printf("concat[%d] = %c\ts1[%d] = %c\n", i, concat[i], i, s1[i]);
	}
	for (j = 0; j < sz2; j++, i++)
	{
		concat[i] = s2[j];
		printf("concat[%d] = %c\ts2[%d] = %c\n", i, concat[i], j, s2[j]);
	}
	concat[i] = '\0';
	printf("concat[%d] = %c\n", i, concat[i]);
	return (concat);
}
