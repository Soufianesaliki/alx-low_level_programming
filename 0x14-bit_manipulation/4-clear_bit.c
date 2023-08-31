#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long int
 * @index: unsigned int position of bit
 * Return:  1 if success
 *          -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1 << index);

	*n = *n & i;
	return (1);
}
