#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees listint_t
 *
 * @head: pointer to the head of the list
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *now;

	while (head)
	{
		now = head;
		head = head->next;
		free(now);
	}
}
