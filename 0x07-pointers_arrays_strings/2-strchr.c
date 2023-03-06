#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s:string
 * @c:searched char
 * Return:first occurance of char or NULL
 */

char *_strchr(char *s, char c)
{
	char *f = s;

	while (*f != '\0')
	{
		if (*f == c)
			return (f);
		else
			f++;
	}
	return ('\0');
}	
