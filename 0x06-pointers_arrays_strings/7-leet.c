#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	char rep[] = "443311007711";
	char les[] = "AaEeOoTtLl";
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; les[j]; j++)
		{
			if (s[i] == les[j])
				s[i] = rep[j];
		}
		i++;
	}
	return (s);
}
