#include <stdio.h>

/**
 * main - fizz buzz programming challenge
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	_putchar('FizzBuzz ');
	}
	else if (i % 3 == 0)
	{
	_putchar('Fizz ');
	}
	else if (i % 5 == 0)
	{
	_putchar('Buzz ');
	}
	else
	{
	_putchar('%d ', i);
	}
	}
	_putchar('\n');

	return (0);
}
