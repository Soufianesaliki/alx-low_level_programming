#include "main.h"

/**
 * sqrt_check - checkes for sqrt
 * @n: number
 * @i: integer
 * Return: result
 */

int sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqrt_check(n, 1));
}
