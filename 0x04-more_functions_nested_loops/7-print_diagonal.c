#include "main.h"

/**
 * print_diagonal - prints '\' n times, followed by a new line.
 * @n: times to print
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, s;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}
	else if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			s = 0;
			while (s < i)
				_putchar(' ');
			_putchar('\\');
		}
	}
	_putchar('\n');
}
