#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates numbers printed
 * @n: amount of numbers to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	if (n < 1)
		return;
	va_start(num_list, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(num_list, int));
	va_end(num_list);
}
