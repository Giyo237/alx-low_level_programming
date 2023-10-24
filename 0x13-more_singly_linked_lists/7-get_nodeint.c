#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 *
 * @head: pointer to the head of the list
 *@index: the index to check
 * Return:null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *now;

	now = head;
	for (j = 0; now != NULL && j < index; j++)
		now = now ->next;

	return (now);
}
