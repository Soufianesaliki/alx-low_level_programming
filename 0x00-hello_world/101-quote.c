#include <unistd.h>
#include <string.h>

/**
 * main - Printing a quote to the std error
 * quote: a string containing the quote
 * Return: 1
*/

int main(void)
{
	char quote[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, &quote, strlen(quote));
	return (1);
}
