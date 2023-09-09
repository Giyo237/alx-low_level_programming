#include <stdio.h>
/**
 * main - function that pritts combinations
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 0; j < 10; j++)
		putchar(j + '0');
	if (i != 8 && j != 9)
	{
		putchar(',');
		putchar(' ');
	}
return (0);
}

