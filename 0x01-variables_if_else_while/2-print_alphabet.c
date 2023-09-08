#include <stdio.h>
/**
 * main - a program that prints alphabets in lower case
 * Return: 0 if succeful
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

