#include "main.h"
/**
 * times_table - prints times table
 * Return:0
 */
void times_table(void)
{
	int result;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	result = i * j;
	if (result < 10)
	{
	_putchar(result +'0');
	}
	else
	{
	_putchar((result / 10) + '0');
	_putchar((result % 10) + '0');
	}
	
	if (j < 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
