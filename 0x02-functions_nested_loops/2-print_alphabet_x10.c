#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines
 * of lowercase alphabet a-z
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 97 + 26; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
