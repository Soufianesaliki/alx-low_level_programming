#include "main.h"

/**
 * print_line - prints '_' n times, followed by a new line.
 * @n: times to print
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
