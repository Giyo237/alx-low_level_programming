#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - function that exe a function as para
* @array: pointer to the array of iterator
* @size: the size of the arr
* @action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i;
	
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		return;
	}
}
