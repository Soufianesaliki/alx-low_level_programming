#include "main.h"

/**
 * times_table - prints 9 times table, starting from 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (p > 9)
			{
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
				_putchar(',');
				_putchar(' ');
				continue;
			}
			_putchar('0' + p % 10);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
