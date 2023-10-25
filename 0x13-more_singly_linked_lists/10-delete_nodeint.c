
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 *at index of listint_t
 * @head: The the pointr to the pntr of the first element of
 *the list
 * Return:1 || -1
 *@index:index to chaeck and delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *now, *t;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	now = *head;
	for (i = 0; now != NULL && i < index - 1; i++)
		now = now->next;

	if (now == NULL || now->next == NULL)
	{
		return (-1);
	}
	t = now->next;
	now->next = t->next;
	free(t);
	return (1);
}
