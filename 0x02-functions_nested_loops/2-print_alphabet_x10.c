#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x
 * Return:0
 */
void print_alphabet_x10(void)
{
char c;
int j;
j = 0;
while (j <= 10)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
j++;
}
}
