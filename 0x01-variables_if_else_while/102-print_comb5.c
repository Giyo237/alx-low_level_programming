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
				putchar(x + '0');
				putchar(y + '0');
				putchar(' ');
				putchar(a + '0');
				putchar(b + '0');
				if (x != '9' && y != 8)
				{
					putchar(',');
					putchar(' ');
			}
	}
	}
	return (0);
}
