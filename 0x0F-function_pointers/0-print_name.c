#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function that prints a string
* @name: pointer to the char
* @f: pointer taking argument char
*/
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
			f(name);
	}
}
