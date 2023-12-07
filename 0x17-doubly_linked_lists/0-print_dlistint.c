#include "lists.h"
/**
 *  print_dlistint - function that prints the elements of a list
 * @h: first element of the linked list
 * Return: node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodecounter = 0;
	/*nodes = h->n;*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecounter++;
	}
	return (nodecounter);
}
