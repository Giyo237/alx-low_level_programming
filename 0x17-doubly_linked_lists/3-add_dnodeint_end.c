#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint_end- function that adds node at the end
  *@head:pointer to the pointer of the first nde of the list
  *@n: interger value to be added
  *Return: t
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *i = *head;

	t = malloc(sizeof(dlistint_t));

	if (t == NULL)
		return (NULL);
	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		t->prev = NULL;
		*head = t;
		return (t);
	}

	
	while (i->next != NULL)
		i = i->next;
	i->next = t;
	t->prev = i;

	return (t);
}
