#include <stdio.h>
/**
 * main - program that prints posible combinations
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
		putchar(i);
	if ((i + 1) % 10 == 0)
		putchar('\n');
	return (0);
}
