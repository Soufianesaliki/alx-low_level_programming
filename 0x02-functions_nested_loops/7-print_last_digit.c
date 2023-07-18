#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = n;
	last = last % 10;
	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
