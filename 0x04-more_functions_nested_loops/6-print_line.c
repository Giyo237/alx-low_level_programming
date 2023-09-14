#include "main.h"
/**
 * print_line - a function that prints a str8 line in the terminal
 * @:number of times it will be on the terminal
 */
void print_line(int n)
{
	int i;

	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
