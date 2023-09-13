#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * @n: the value it starts printing from
 * Return: Always 0.
 */
void fibonacci(unsigned long long int c)
{
unsigned long long int  a = 1;
unsigned int long long b = 2;
int i;

printf("%lld, %lld", a , b);

for (i = 1; i <= 94; i++)
{
c = b + a;
printf(", %llu", c);
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
