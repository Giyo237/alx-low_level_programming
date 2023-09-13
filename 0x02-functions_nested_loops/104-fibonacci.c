#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
	int i;
	unsigned long prev = 1, curr = 2, next;

	printf("%lu, %lu", prev, curr);

	for (i = 3; i <= 98; i++)
	{
		next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
