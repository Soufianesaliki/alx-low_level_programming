#include "main.h"

/**
 * times_table - prints 9 times table, starting from 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j, p;
	char n, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			p = i * j;
			if ((p / 10) > 0)
			{
				_putchar('0' + (p / 10));
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + (p % 10));
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
