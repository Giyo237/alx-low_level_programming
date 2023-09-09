#include <stdio.h>
/**
 * main - prints all matching numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	int d;

	for (i = '0'; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = '0'; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;
		}
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (a != '9' && b != 8)
				{
					putchar(',');
					putchar(' ');
			}
	}
	}
	return (0);
}
