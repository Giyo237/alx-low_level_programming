#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function that prints a string
* @name: pointer to the char
* @f: pointer taking argument char
*/
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	if (name == NULL)
	{
		return;
	}
	else
	{
			f(&name[i]);
	}
}
