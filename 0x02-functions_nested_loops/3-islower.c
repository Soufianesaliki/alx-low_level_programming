#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: is the character to be checked
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(char c)
{
	if (c >= 97 && c < 97 + 26)
		return (1);
	else
		return (0);
}
