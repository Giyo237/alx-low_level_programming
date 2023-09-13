#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * @n: the value it starts printing from
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int i;

	printf("%lu, %lu, ", a, b);
	for ( i = 0; i < 96; i++)
	{
	c = a + b;
	printf("%lu, ", c);
	a = b;
	b = c;
	}
	c = a + b;
    printf("%lu\n", c);
    return 0;
}
