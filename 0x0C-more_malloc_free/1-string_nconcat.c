#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that conc 2 strings
 * @s1: stringto be copied
 * @s2: pasted here
 * Return: prt
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}

	if (n >= l2)
	{
		n = l2;
	}
	r = malloc(sizeof(char) * (l1 + n + 1));
	if (r == NULL)
	{
		return (NULL);

	}
	/**unsigned int i = 0;**/
	for (i = 0; i < l1; i++)
	{
		r[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		r[l1 + i] = s2[i];
	}
	r[l1 + n] = '\0';
	return (r);
}
