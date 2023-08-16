#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of args
 * @argv: array of strings
 * Return:	0 if success
 *		98 in case of the wrong number of args
 *		99 in case of the wrong operator
 *		100 in case of (/ or %) by 0
 */
int main(int argc, char **argv)
{
	int a, b, sum;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp("/", argv[2]) == 0 || strcmp("%", argv[2]) == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	sum = get_op_func(argv[2])(a, b);
	printf("%d\n", sum);
	return (0);
}
