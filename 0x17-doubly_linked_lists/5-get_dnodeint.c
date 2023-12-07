#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns nth node
 *@head: first element on the node
 *@index: index to be checked
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);
		head = head->next;
		c++;
	}
	return (NULL);
}
