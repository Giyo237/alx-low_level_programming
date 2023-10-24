#include "lists.h"
#include <stddef.h>

/**
 * listint_len - function that returns thee number of elements in a linked l*ist
 *
 * @h: pointer to the the string
 * 
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
