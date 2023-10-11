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
	int bytes, i;
/*	unsigned char main_ptr;*/

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *main_ptr = (unsigned char *)&main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}

	printf("\n");

	return (0);
}
