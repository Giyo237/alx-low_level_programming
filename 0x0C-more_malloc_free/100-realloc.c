#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	char *p, *q;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}
	 p = ptr, q = nptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			q[i] = p[i];
	}

	for (i = 0; i < old_size; i++)
	{
		q[i] = p[i];
	}

	free(ptr);
	return (nptr);
}
