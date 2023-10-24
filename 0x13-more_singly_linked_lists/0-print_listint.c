#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all elements of a listint_t
 *
 * @h: pointer pointing to the string
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}