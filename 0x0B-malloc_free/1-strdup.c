#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
*  *_strdup - function that returns a ptr to a new aloc mem
* @str: string to be duplicated if standards are met
* Return: NULL or str
*/
char *_strdup(char *str)
{
	char *dup_prt;
	int i, t;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while(str[i] != '\0')
		i++;

	dup_prt = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (dup_prt == NULL)
	{
		return (NULL);
	}
	for (t = 0; str[t]; t++)
		dup_prt[t] = str[t];

	return (dup_prt);
}
