#include <stdio.h>
#include <stdlib.h>
/**
* main - function that prints own opcodes
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	int b, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);

	if(b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < b - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
