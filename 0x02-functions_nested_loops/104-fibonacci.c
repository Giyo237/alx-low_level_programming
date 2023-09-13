#include <stdio.h>
/**
 * main - Entry point of the program.
 * fibonacci - where the computation takess place
 * Return: Always 0.
 */

int main(void)
{
	int n1 = 1, n2 = 2, n3;
	int i;

	printf("1, 2, ");
	for(i = 3; i < 99; i++)
	{
	n3 = n1 + n2;
	printf("%d, ", n3);
	n1 = n2;
	n2 = n3;
	}

	printf("\n");
	return (0);
}
