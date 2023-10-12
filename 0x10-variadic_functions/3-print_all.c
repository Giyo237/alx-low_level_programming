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
	char *separator = "";
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
	while (format != NULL && format[i] != '\0')
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
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
						{
							printf("%s%s", separator, str);
						}
					}
					break;
					default:
					break;
		}
				separator = ", ";
				i++;
	}
		}
	}
		va_end(args);
		printf("\n");
}
