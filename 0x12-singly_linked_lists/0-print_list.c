#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list_t
 *
 * @h: The pointer to the head of lis_t
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	char *str;
	size_t node = 0;
	/*unsigned int len;*/

	while (h != NULL)
	{
		str = h->str;
		if (str == NULL)
			str = "(nil)";
		printf("[%u] %s\n", h->len, str);
		h = h->next;
		node++;
	}
	return (node);
}
