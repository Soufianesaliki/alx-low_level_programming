#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet a-z
 * Return: nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
