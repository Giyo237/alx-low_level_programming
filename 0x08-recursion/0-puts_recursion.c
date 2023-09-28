#include "main.h"
/**
* puts_recursion - function that prints stringwithout the use of a loop
*@s: the pointer to the strn
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
