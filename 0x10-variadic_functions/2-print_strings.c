#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separates strings printed
 * @n: amount of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_list;
	char *str;

	va_start(str_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);
}
