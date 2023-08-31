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
	unsigned long int result = 1, deff = n ^ m;
	unsigned int i = 0, bits = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((deff & result) == result)
			bits += 1;
		result <<= 1;
	}
	return (bits);
}
