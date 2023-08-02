#include "main.h"

/**
 * check_prime - checks if prime number
 * @n: number
 * @i: factor
 * Return: result
 */

int check_prime(int n, int i)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks for prime number
 * @n: number
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(n, 2));
}
