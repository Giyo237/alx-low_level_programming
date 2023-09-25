#include "main.h"

/**
 * _memset - fill block of mem with specific val
 * @s: starting point or address
 * @b: the operant
 * @n: number of  bytes
 *
 * Return: n bytes and the changed arr
 */

char *_memset(char *s, char b, unsigned int n)

{

	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

