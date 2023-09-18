#include "main.h"
/**
 * print_rev - a function that prints string in reverse
 * @s: operant
 */
void print_rev(char *s)
{
	int l = 0;

	do {
		if (*s == '\0')
		{
			s--;
			break;
		}
		l++;
		s++;
	} while (1);
	while (l > 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
