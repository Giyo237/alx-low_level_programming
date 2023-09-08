#include <stdio.h>
/**
 * main - prints alphabet in rev
 * Return: 0 if it runs succesfully
 */
int main(void)
{
	char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
