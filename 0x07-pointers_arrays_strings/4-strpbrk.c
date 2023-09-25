#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int betty;

	while (*s)
	{
	for (betty = 0; accept[betty]; betty++)
		{
			if (*s == accept[betty])
			return (s);
		}
		s++;
	}
	return ('\0');
}

