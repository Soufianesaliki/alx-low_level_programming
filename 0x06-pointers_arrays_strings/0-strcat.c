#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: final string
 */

char *_strcat(char *dest, char *src)
{
	int i, l = 0;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == NULL)
		return (src);
	if (src == NULL)
		return (dest);
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
