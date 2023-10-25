#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - function that print a listint_t
 *@head:poiter to the first elemetn of the list
 *
 *
 * Return:number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head < head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next,head->next->n);
			printf("-> [%p] %d\n", (void *)head,head->n);
			exit(98);
		}
		head = head->next;
	}
	return (count);
}
