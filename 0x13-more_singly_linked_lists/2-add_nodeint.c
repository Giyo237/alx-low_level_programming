#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - function that returns address of new node
 *
 * @h:pointer to the pinter of the head
 * @n: value to add to the new node
 * Return: address
 */
 listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
