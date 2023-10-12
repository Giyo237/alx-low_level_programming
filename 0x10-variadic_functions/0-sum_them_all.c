#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
* sum_them_all - function that sums it parameters
* @n: number of parameters
* @...: the variable number of parameetters
* Return: 0 or sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum, num;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	/*va_list args;*/
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}

