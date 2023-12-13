#include "main.h"
/**
 * _puts - a function that prints a string to stdout
 * @str: operant
 */
void _puts(char *str)
{
	do {
		if (*str == '\0')
		{
			_putchar('\n');
		break;
		}
		_putchar(*str);
		str++;
	} while (1);
}

