#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
