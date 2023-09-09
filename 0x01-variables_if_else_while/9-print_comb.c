#include <stdio.h>
/**
 * main - program that prints posible combinations
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		putchar(i + '100');
	putchar(',');
		putchar(' ');
	if ((i + 1) % 10 == 0)
		putchar('\n');
	return (0);
}
