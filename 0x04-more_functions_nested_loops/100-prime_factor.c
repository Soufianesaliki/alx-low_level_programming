#include "main.h"

/** main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int i = 1, largfact = 0;
	long int num = 612852475143;

	while (num > 0)
	{
		if (num % i == 0)
		{
			if (i > largfact)
			{
				largfact = i;
			}
			num = num / i;
		}
		i++;
	}
	printf("%lu\n", largfact);
	return (0);
}
