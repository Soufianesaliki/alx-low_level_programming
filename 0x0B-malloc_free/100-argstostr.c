#include "main.h"

/**
 * argstostr - concatenates all args of a program
 * @ac: number of args
 * @av: array of strings
 * Return:	string
 *		NULL if ac = 0 or av = NULL
 *		NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, k, len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	len += ac;
	concat = (char *)malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	j = k = 0;
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			concat[k] = av[i][j];
		concat[k] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}
