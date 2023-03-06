#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:string
 * @b:char
 * @n:unsigned integer
 * Return:pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;
        int i = 0;

	while ((*s != '\0') && (i < n))
        {
	        *s = b;
		s++;
		i++;
	}
        return d;
}

