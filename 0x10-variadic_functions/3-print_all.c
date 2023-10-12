#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function  that print anything
 *@format: list of args
 *@...: variable number of arg
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "", *str;
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);

					if (!str)
						str = "(nil)";
					{
						printf("%s%s", separator, str);
					}
					break;
					default:
					i++;
					continue;
		}
				separator = ", ";
				i++;
	}
	}
	printf("\n");
va_end(args);	
}
