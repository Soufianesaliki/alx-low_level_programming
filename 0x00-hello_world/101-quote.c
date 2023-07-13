#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Printing a quote to the std error
 * quote: a string containing the quote
 * Return: 1
*/

int main(void)
{
	char quote [100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, &quote, strlen(quote));
	putchar('\n');
	return (1);
}
