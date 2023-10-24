#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that returns
 *@n:data value
 * @head: The poiter to the firsst element
 *@idx:element to be inserted
 * Return:null or idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nnode, *now = *head;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
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
		for (i = 0; now != NULL && i < idx - 1; i++)
			now = now->next;
		if (now == NULL)
		{
			return (NULL);
		}
		nnode = malloc(sizeof(listint_t));
		if (nnode == NULL)
		{
			return (NULL);
		}
		nnode->n = n;
		nnode->next = now->next;
		now->next = nnode;
		return (nnode);
}
