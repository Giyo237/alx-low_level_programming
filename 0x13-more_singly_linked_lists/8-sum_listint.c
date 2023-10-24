#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all data
 *
 * @head: The pointer to the head of the list
 *
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;

	while (now)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
