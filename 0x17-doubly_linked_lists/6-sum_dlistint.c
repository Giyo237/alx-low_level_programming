#include "lists.h"
/**
 *sum_dlistint  - function that returns all data of a dlistint
 *
 * @head: The first element of the linked list
 *
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int adder = 0;

	while (head != NULL)
	{
		adder += head->n;
		head = head->next;
	}
	return (adder);
}

