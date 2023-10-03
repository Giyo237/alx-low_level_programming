#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
* *str_concat - a function that concatenates 2 strns
* Return: s1 folowed by s2 or NULL if failure
*@s1: pointer one to string one
*@s2: pointer to string two
*/
char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	conc_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (conc_str == NULL)
	{
		return (NULL);
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		conc_str[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')
	{
		conc_str[len1] = s2[len2];
		len1++, len2++;
	}
	conc_str[len1] = '\0';
	return (conc_str);
}

