#include <stdio.h>
/**
 * main - prints hexadecimals
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 10; i < 16; i++)
		putchar(i + 'a');
			putchar('\n');
	return (0);
}
