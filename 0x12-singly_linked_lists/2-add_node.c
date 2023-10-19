#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that returns
 *
 * @head: double pointer to The first of the list
 * @str: string to be added
 * Return: addy of the new nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (n);
}
