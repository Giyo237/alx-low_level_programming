#include <stdlib.h>
#include "lists.h"
/**
*reverse_listint - function that prints list in rev
*@head:pointer to the pointer of the first element
*Return:pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;
	return (p);
}
