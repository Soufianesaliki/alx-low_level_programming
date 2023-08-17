#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: separates strings printed
 * @n: amount of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;

	if (n < 1)
		return;
	va_start(str_list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(str_list, char *) != NULL)
			printf("%s", va_arg(str_list, char *));
		else
			printf("(nil");
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(str_list, char *));
	va_end(str_list);
}
