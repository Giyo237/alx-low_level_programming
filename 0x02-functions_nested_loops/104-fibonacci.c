#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacciSequence - where the computation takess place
 * @n: the value it starts printing from
 * Return: Always 0.
 */
void fibonacciSequence(int n)
{
	int a = 0, b = 1, c;

printf("%d, %d", a, b);
while (b <= n)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
}
int main(void)
{
	int number = 98;

	fibonacciSequence(number);
	return (0);
}
