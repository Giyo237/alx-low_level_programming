#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: operant pointer
 * Return: lenght l
 */
int _strlen(char *s)
{
	int l = 0;

	do {
		l++;
		s++;
	} while (*s != '\0');
	if (*s == '\0')
		_putchar(*s);
	return (l);
}
