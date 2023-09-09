#include <stdio.h>
/**
 * main - function that pritts combinations
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	do {
	for (i = 0; i <= 8; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
	if (i != 8 || j != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	} while (i != j);
	putchar('\n');
return (0);
}

