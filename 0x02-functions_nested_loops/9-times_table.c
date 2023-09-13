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
	int r;
	int d;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	result = i * j;
	if ( result > 9)
	{
	r = result % 10;
	d = ((result - r) / 10);
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(r + '0');
	}
	else
	{
	if (j != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(result + '0');
	}
	}
	_putchar('\n');
	}
}
