#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that frees a list
 * @head: first elemt on the linlked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i = head;
	dlistint_t *next;

	while (i != NULL)
	{
		next = i->next;
		free(i);
		i = next;
	}
}
