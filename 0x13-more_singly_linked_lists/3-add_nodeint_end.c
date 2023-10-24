#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the tail
 *@head:pointer to the head of the list
 * @n: number to be added to the list
 *
 * Return: addres of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		listint_t *t = *head;

		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = nnode;
	}
	return (nnode);
}
