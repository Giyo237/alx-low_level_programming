#include "main.h"
/**
 * print_last_digit - prints last digitss of an int n
 * @n: checker
 * Return: 0
 */
int print_last_digit(int n)
{
	int l;
	l = 0;

	l = n % 10;
	if (l < 0){
	l = -l;
	}
	_putchar(l + '0');
	
return (l);
}
