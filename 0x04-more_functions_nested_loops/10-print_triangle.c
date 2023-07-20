#include "main.h"

/**
 * print_triangle - prints a triangle using '#', followed by a new line.
 * @size: is the size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	else if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
