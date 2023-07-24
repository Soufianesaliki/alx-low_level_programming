#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string
 * Return nothing
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char tmp;

	while (s[l] != '\0')
		l++;
	while (i < l / 2)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
		i++;
	}
}
