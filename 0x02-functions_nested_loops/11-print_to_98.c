#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d");
			if (n == 98)
			{
				return;
			}
			printf(", ");
		}
	}
	else
	{
		for (i = n; n <= 98; i++)
		{
			printf("%d");
			if (n == 98)
			{
				return;
			}
			printf(", ");
		}
	}
}
