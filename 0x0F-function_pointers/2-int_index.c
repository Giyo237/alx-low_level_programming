#include "function_pointers.h"

/**
* int_index - function that searches for an elem
* @array: pointer to the array to be searched
* @size: the length of arr
* @cmp: pointer to the function used to compare
* Return: i if found or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
		return (-1);
}
