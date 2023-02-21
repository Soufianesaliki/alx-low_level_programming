#include "main.h"

/**
 * main - Entry point
 * Description: prints '-putchar' followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

int main(void)
{
        void print_alphabet(void);
        return (0);
}
