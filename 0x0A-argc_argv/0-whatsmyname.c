#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
