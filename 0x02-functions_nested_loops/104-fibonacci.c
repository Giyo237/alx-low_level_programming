#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * @n: the value it starts printing from
 * Return: Always 0.
 */
void fibonacci(int n)
{
unsigned int  a = 0;
unsigned int b = 1;
unsigned int c;
int i;

printf("1, 2");

for (i = 1; i <= 98; i++)
{
c = b + a;
printf(", %u", c);
a = b;
b = c;
}
}
int main(void)
{
	int number = 98;

	fibonacci(number);
	return (0);
}
