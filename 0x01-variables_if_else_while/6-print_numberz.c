#include <stdio.h>
/**
 * main - a progra, that prints numbers from 0 to 9
 * Return: 0 if succesful
 */
int main(void)
{
	int i;

	i=0;
	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
