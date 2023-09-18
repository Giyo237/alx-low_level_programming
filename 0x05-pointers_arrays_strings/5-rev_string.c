#include "main.h"
#include <string.h>
/**
* rev_string - function that reverses str
* @s: operant
*/
void rev_string(char *s)
{
	int l = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
