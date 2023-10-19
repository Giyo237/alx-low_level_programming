#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds node at the tail of a list
 *@str:string to be added to the linke list
 * @head: sdouble pointer to the first node of the list
 *
 * Return: addy of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));

	if (n == NULL)
	return (NULL);

	/*n->str = strdup(str);*/

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
		/*list_t *temp = *head;*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n;
	return (n);
}
