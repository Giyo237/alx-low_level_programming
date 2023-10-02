#include <stdio.h>
#include "main.h"
/**
* main - prints arg
* @argv: nominant
* @argc: argument counter
* Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
	int i, j = 0;

	j = argc;
	for (i = 0; i < j; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
