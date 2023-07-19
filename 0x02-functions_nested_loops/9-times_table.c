#include "main.h"

/**
 * times_table - prints 9 times table, starting from 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (((i * j) / 10) > 0)
			{
				_putchar('0' + ((i * j) / 10));
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + ((i * j) % 10));
			if (j == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
