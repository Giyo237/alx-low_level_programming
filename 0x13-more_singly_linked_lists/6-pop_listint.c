#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 *
 * @head: The pointer to the pointer of the first element
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *now;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	now = *head;
	*head = (*head)->next;
	free(now);

	return (i);
}
