#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the linked list
 * @idx: Index where the new node should be inserted
 * @n: Value of the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (t == NULL)
		return (NULL);

	t->n = n;
	if (*h == NULL && idx != 0)
	{
		free(t);
		return (NULL);
	}
	if (idx == 0)
	{
		t->next = *h;
		t->prev = NULL;
		if (*h != NULL)
			(*h)->prev = t;
		*h = t;
		return (t);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(t);
		return (NULL);
	}
	t->next = current->next;
	t->prev = current;
	if (current->next != NULL)
		current->next->prev = t;
	current->next = t;
	return (t);
}
