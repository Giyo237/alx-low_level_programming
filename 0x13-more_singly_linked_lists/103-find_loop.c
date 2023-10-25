#include "lists.h"
#include <stdlib.h>
/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *snail = head;
listint_t *turbo = head;

if (!head)
	return (NULL);
while (snail && turbo && turbo->next)
{
	turbo = turbo->next->next;
	snail = snail->next;
	if (turbo == snail)
	{
		snail = head;
		while (snail != turbo)
		{
			snail = snail->next;
			turbo = turbo->next;
		}
		return (turbo);
	}
}
return (NULL);
}

