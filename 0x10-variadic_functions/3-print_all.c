#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints all types using the format specifier
 * @format: c: char, i: int, f: float, s: string
 * Return: nothing
 */
void print_all(const char * const format, ...){
	long unsigned int printed = 0, i = 0;
	char *str;
	va_list all_list;

	va_start(all_list, format);
	while (format[i]){
		switch(format[i]){
			case 'c':
				printf("%c", va_arg(all_list, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(all_list, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(all_list, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(all_list, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				printed = 1;
				break;
			default :
				printed = 0;
				break;
		}
		if (i < strlen(format) - 1 && printed == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all_list);
}
