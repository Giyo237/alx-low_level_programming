#include <stdio.h>
#include "main.h"
/**
* main - function that prints number of args passed
* @argv: dominant operant
* @argc: counter operant
* Return: 0 if succesful
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n",argc - 1);
	return (0);
}
