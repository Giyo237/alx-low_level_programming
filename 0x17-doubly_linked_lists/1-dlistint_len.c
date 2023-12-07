#include "lists.h"
/**
  * dlistint_len - function that retrus the number ofelements in a list
  * @h: first elemt of the linked list
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
