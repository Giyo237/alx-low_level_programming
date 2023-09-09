#include <stdio.h>
/**
 * main - program that prints posible combinations
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	putchar(i);
	if (i != 10)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
