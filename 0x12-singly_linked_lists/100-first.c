#include "lists.h"

/**
 * first - prints a sentance before the main function
 * Return: nothing
 */
void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
