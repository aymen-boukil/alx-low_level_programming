#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints any data type followed by a new line.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);
					str = (str == NULL) ? "(nil)" : str;
					printf("%s%s", sep, str);
				}
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

