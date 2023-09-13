#include <stdio.h>
/**
 * numlenght - Entry point of the program.
 * @n: operant
 * Return: Always 0.
 */

int numlenght(int n)
{
	int l = 0;

if (!n)
{
return (1);
}

while (n)
{
	n = n / 10;
	l += 1;
}
return (l);
}
/**
 * main - prints the firt 98 fib seq
 * Return:0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, h1 = 0, h2 = 0, tm = 0;
	short int i = 1, a;

	while (i <= 98)
	{
		if (h1 > 0)
		printf("%lu", h1);
		a = numlenght(mx) - 1 - numlenght(f1);
		while (h1 > 0 && a > 0)
		{
		printf("%i", 0);
		a--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tm = h1 + h2 + (f1 + f2) / mx;
		f1 = f2;
		h1 = h2;
		f2 = tmp;
		h2 = tm;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
