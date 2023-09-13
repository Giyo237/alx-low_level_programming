#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * Return: Always 0.
 */

#define MAX 98

int main(void)
{
	unsigned long f1 = 0, f2 = 1, s;
	unsigned long f1h1, f1h2, f2h1, f2h2;
	unsigned long  h1, h2;
	int i;

	for (i = 0; i < MAX; i++)
	{
	if (i < 2)
	{
	s = i;
	}
	else
	{
	s = f1 + f2;
	f1 = f2;
	f2 = s;
	}
	if (i < MAX - 1)
	{
	printf("%lu, ", s);
	}
	else 
	{
	f1h1 = f1 / 10000000000;
	f2h1 = f2 / 10000000000;
	f1h2 = f1 % 10000000000;
	f2h2 = f2 % 10000000000;

	h1 = f1h1 + f2h1;
	h2 = f1h2 + f2h2;
	if (f1h2 + f2h2 > 9999999999)
	{
	h1 += 1;
	h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	}
	}
	printf("\n");
	return (0);
}
