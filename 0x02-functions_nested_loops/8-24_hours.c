#include "main.h"
/**
 * jack_bauer - prints every minutes of the day of jack
 * Return: 0
 */
void jack_bauer(void)
{
	int min;
	int hrs;

	hrs = 0;
	min = 0;
	for (hrs = 0; hrs < 24; hrs++)
	{
	for (min = 0; min < 60; min++)
	{
	_putchar((hrs / 10) + '0');
	_putchar((hrs % 10) + '0');
	_putchar(':');
	_putchar((min / 10) + '0');
	_putchar((min % 10) + '0');
	_putchar('\n');
	}
	}
}

