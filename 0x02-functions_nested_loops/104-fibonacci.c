#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * @n: the value it starts printing from
 * Return: Always 0.
 */
void fibonacci(int n)
{
unsigned int previous = 1;
unsigned int current = 2;
unsigned int next;
int i;

printf("1, 2");

for (i = 3; i <= n; i++)
{
next = previous + current;
printf(", %u", next);
previous = current;
current = next;
}
}
int main(void)
{
	int number = 98;

	fibonacci(number);
	return (0);
}
