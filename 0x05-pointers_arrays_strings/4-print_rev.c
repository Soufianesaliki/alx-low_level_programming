#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l = 0;

	if (s == NULL)
		return;
	while (s[l] != '\0')
		l++;
	l--;
	while (l > -1)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
