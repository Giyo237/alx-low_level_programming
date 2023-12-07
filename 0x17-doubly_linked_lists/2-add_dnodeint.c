#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint - function that adds a node
 *@h:the pointer to the pointer of the first elemt on the linked list
 *@n: value to be assigned
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);

	t->n = n;
	t->prev = NULL;
	t->next = *head;

	if (*head != NULL)
		(*head)->prev = t;
	*head = t;
	return (t);
}
