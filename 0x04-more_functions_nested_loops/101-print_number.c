#include "main.h"

/**
 * print_number -  prints an integer using _putchar
 * @n: number
 * Return: nothing
 */

void print_number(int n)
{
	int i, num, div = 1, t_div, t_num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	t_num = num;
	t_div = 0;
	while (t_num > 0)
	{
		t_num = t_num / 10;
		t_div++;
	}
	for (i = 0; i < t_div; i++)
		div = div * 10;
	i = 0;
	for (i = 0; (num / 10) < 0; i++)
	{
		_putchar('0' + (num / div));
		div = div / 10;
	}
	_putchar('0' + (num % 10));
	_putchar('\n');
}	
