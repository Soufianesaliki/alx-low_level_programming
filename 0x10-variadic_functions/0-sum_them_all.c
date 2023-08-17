#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all args
 * @n: number of args
 * Return:	sum of all args
 *		0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_list;

	if (n == 0)
		return (0);
	va_start(arg_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);
	va_end(arg_list);
	return (sum);
}
