#include <stdio.h>
/**
 * main - a program that prints numbers
 * Return: 0
 */
void print_alphabet(void);
{
	char a;

	for (a = 'a'; a < 'z'; a++)
	{
		_putchar('a');
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
