#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, l = 1;

	if (str == NULL)
		return;
	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
	{
		for (i = (l / 2) + 1; i < l; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = ((l - 1) / 2) + 1; i < l; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
