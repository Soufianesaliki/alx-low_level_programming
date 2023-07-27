#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			if (i == 0)
				s[0] = s[0]  - 32;
			for (j = 0; sep[j]; j++)
			{
				if (s[i - 1] == sep[j])
					s[i] = s[i]  - 32;
			}
		}
		i++;
	}
	return (s);
}
