#include <stdio.h>
/**
 * main - prints all matching numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int x;
	int y;
	int a;
	int b;

	do {
	for (i = 0; i <= 99; i++)
	{
		x = i / 10;
		y = i % 10;
		for (j = i; j <= 99; j++)
		{
			a = j / 10;
			b = j % 10;
		}
			if (x < a || (x == a && y < b))
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
				putchar(a);
				putchar(b);
			}
	}
	} while (i == j);
	return (0);
}
