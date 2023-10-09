#include <stdlib.h>
#include "main.h"

/**
 **malloc_checked - functn that allocates a memory using malloc
 * @b: argument
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	void *pter;

	pter = malloc(b);

	if (pter == NULL)
		exit(98);

	return (pter);
	_putchar('\n');
}
