#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (needle == NULL)
		return (haystack);
	for (; *haystack; haystack++)
	{
		if (*haystack == needle[0])
			return (haystack);
	}
	return (NULL);
}
