#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: the dstring to nbe printed
* @n: number of strings to be printed
* @...: variable number of args
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
