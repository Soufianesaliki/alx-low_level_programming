#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s:string
 * @c:searched char
 * Return:first occurance of char or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	return (NULL);
}	
