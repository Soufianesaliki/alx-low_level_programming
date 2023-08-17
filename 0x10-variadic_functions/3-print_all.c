#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all types using the format specifier
 * @format: c: char, i: int, f: float, s: string
 * Return: nothing
 */
void print_all(const char * const format, ...){
	int printed = 0, i = 0;
	char *str;
	va_list all_list;

	va_start(all_list, format);
	while (format[i] != '\0' && format != NULL){
		switch(format[i]){
			case 'c':
				printf("%c", va_arg(all_list, int));
				printed = 1;
				break;
			case 'i':
				printf("%i", va_arg(all_list, int));
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
		if (format[i + 1] != '\0' && printed == 1)
			printf(", ");
		i++;
	}
	printf("\n");

