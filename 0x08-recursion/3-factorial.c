#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n:integer a number
 *
 * If:@n lower than 0 Return:-1
 * If:@n equal to 0 Return:1
 * If:@n bigger than 0 Return: factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		int f = 1;

		f *= factorial(n - 1);
	}
	return (f);
}
