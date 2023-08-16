#include "function_pointers.h"

/**
 * print-name - prints a name
 * @name: string
 * @f: function pointers
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
