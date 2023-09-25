#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{

	unsigned int n = 0;
	int betty;

	while (*s)
	{
		for (betty = 0; accept[betty]; betty++)
		{
			if (*s == accept[betty])
			{
				n++;
				break;
			}
			else if (accept[betty + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
