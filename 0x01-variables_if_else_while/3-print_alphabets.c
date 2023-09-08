#include <stdio.h>
/**
 * main - A program that prints from a to z in both upper and lower cases
 * Return: 0 when succesful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		printf(i);
	putchar("\n");
	return (0);
}


