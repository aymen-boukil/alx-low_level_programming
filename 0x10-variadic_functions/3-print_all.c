#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

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
				printf("%s", sep);
				{
					char *str = va_arg(args, char *);
					str = (str == NULL) ? "(nil)" : str;
					printf("%s", str);
				}
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

