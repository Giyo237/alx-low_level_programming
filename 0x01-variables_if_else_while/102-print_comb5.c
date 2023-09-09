#include <stdio.h>
/**
 * main - prints all matching numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	do {
	for (i = 0; i <= 99; i++)
		for (j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 99 || j != 99)
		}
	{
				putchar(',');
				putchar(' ');
			}
	} while (i == j);
	return (0);
}
