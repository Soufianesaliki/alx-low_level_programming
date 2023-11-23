#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const char binary
 * Return:  converted number
 *          0 if b is NULL or has other than 0 or 1 chars
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		num = num << 1;
		if (b[i] == '1')
			num = num | 1;
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}
	return (num);
}
