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

	if (str == NULL)
	{
		return (NULL);
	}
	dup_prt = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (dup_prt == NULL)
	{
		return (NULL);
	}
	strcpy(dup_prt, str);
	return (dup_prt);
}
