#include "main.h"

/**
 * flip_bits - gives the number of bits you
 * would need to flip to get from one number to another
 * @n: pointer to unsigned long int
 * @index: unsigned int position of bit
 * Return: int number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, deff = 0;

	deff = n ^ m;
	if (deff == 0)
		return (0);
	while (deff > 0)
	{
		if ((deff & 1) == 1)
			bits += 1;
		deff >>= 1;
	}
	return (bits);
}
