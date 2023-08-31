#include "main.h"

/**
 * get_bit - finds bit value at a given index
 * @n: unsigned long int
 * Return:  the bit value of a bit at a given index
 *          -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if ((n & 1) == 1)
		return (1);
	if ((n & 1) == 0)
		return (0);
}
