#include "main.h"
#include <math.h>

/**
 * get_bit - finds bit value at a given index
 * @n: unsigned long int
 * @index: position of the bit
 * Return:  the bit value of a bit at a given index
 *          -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int nt = 1;

	nt = nt << index;
	if (nt > n)
		return (-1);
	n = n >> index;
	if ((n & 1) == 1)
		return (1);
	return (0);
}
