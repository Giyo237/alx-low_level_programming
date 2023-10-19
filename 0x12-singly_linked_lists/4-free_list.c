#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that rfrees a list_t
 *
 * @head: Thepointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
