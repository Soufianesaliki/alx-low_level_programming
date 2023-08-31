#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return:  0 if big endian
 *          1 if little endian
*/
int get_endianness(void)
{
	int number = 0x569432;
	char *detect = (char *)&number;

	if (*detect == 0x32)
		return (1);
	if (*detect == 0x56)
		return (0);
}
