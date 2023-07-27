#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 'A' || s[i] == 'a')
			s[i] = '4';
		if (s[i] == 'A' || s[i] == 'e')
			s[i] = '4';
		if (s[i] == 'O' || s[i] == 'o')
			s[i] = '0';
		if (s[i] == 'T' || s[i] == 't')
			s[i] = '7';
		if (s[i] == 'L' || s[i] == 'l')
			s[i] = '1';
		i++;
	}
	return (s);
}
